#include <cstdio>
#include <unordered_map>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <list>
#include <ctime>
using namespace std;
/*!
���̵�״̬�ڵ�
*/
struct tag_state{
	char mask[5][4];  //����ͼ��,�±�Ϊshapes��ȡֵ��-1Ϊ�հ�
	char pos[10];     //10��shape��������Ͻ�λ�á��г���4���У�ȡֵ0-19
	vector<int> neib; //�ڽӱ�Ϊstatus���±�
	std::string text; //��������Ϊ���̵Ŀɶ�ͼ��
};

//10 ����״
static const int shapes[10][4][2] = {
	{{ 0, 0},{ 1, 0},{ 0, 1},{ 1, 1}},//�ܲ٣�������2x2
	{{ 0, 0},{ 1, 0},{-1,-1},{-1,-1}},//���Ƶ��佫��������2x1
	{{ 0, 0},{ 1, 0},{-1,-1},{-1,-1}},//���Ƶ��佫��������2x1
	{{ 0, 0},{ 1, 0},{-1,-1},{-1,-1}},//���Ƶ��佫��������2x1
	{{ 0, 0},{ 1, 0},{-1,-1},{-1,-1}},//���Ƶ��佫��������2x1
	{{ 0, 0},{ 0, 1},{-1,-1},{-1,-1}},//���𣬣�����Σ�1x2
	{{ 0, 0},{-1,-1},{-1,-1},{-1,-1}},//С�䣬���顣
	{{ 0, 0},{-1,-1},{-1,-1},{-1,-1}},//С�䣬���顣
	{{ 0, 0},{-1,-1},{-1,-1},{-1,-1}},//С�䣬���顣
	{{ 0, 0},{-1,-1},{-1,-1},{-1,-1}} //С�䣬���顣
};
//����10������Ŀɶ�����
static const char shapName [] = "CAAAABZZZZ";
//״̬ȫͼ
static vector<tag_state> status;
//״̬���������ڴ����̲����ҵ�״̬��
static unordered_map<string,int> all_status_pos;
//��̽���洢����
static list<int> bestpath;

//��ʼ��״̬ת��ͼ����һ������������ͼ�ڵ�
int make_status();
//��ʼ��״̬ת��ͼ���ڶ����������ڽӱ�
void move_blocks();
//����һ�ν��
void search_cal(string start);
//��ʼ��������ֻ������һ�Σ����Է�������
void init_cal()
{
    printf ("Init status table...");
    int nStatus = make_status();
	printf ("Ok!\nLink Graph...");
    move_blocks();
    puts("Ok!\n");
	printf ("total status = %d\n" , nStatus);
	printf ("----------------------\n");
}
//Ч�ʲ���
void benchmark()
{
    srand(time(0));
    const int cstatus = all_status_pos.size();
    clock_t start_clk = clock();
    const int tests = 10000;
    for (int i=0;i<tests;++i)
    {
        long long sd = 21371 * ((long long )(rand())) + 23117* (long long )(rand()) ;
        long long mk = sd%cstatus;
        search_cal(status[mk].text);
    }
    clock_t end_clk = clock();
    double cost = 1.0 * (end_clk - start_clk)/CLOCKS_PER_SEC;
    printf ("Avg speed = %.2lf puzzles/s",tests/cost);
}

string char2key(const char buf[/*20*/])
{
    std::string s;
    for (int i=0;i<5;++i)
    {
        for (int j=0;j<4;++j)
            s += toupper(buf[i*4+j]);
        s+= "\n";
    }
    return s;
}

int main()
{
    init_cal();
    //1. example
    char buf[] = {
        "ACCA"
        "ACCA"
        "ABBA"
        "ASSA"
        "ZZZZ"
    };

    std::string s = char2key(buf);
    printf ("Cal\n%s\n...",s.c_str());
    search_cal(s);

    if (bestpath.size())
    {
        int i = 0;
        for (auto p = bestpath.begin();p!=bestpath.end();++i,++p)
        {
            printf ("Step %d:\n",(int)i);
            puts(status[*p].text.c_str());
        }
    }
    else
        puts ("\nNo Valid results.\n");
    puts ("\nbentch mark...\n");

    //2. example
    //���ܲ���
    benchmark();


    //3. �û�����
    bool exit_m = false;
    do{
        puts ("\nPlease Input 20 Chars and press Enter:");
        puts ("C=2x2 A=2x1 B=1x2 Z=1x1 S=Space, 'exit' to Exit.");
        char input[256];
        fgets(input,255,stdin);
        if (input[0]=='E' || input[0]=='e' )
            exit_m = true;
        else
        {
            s = char2key(input);
            printf ("Cal\n%s\n...",s.c_str());
            search_cal(s);
            if (bestpath.size())
            {
                int i = 0;
                for (auto p = bestpath.begin();p!=bestpath.end();++i,++p)
                {
                    printf ("Step %d:\n",(int)i);
                    puts(status[*p].text.c_str());
                }
            }
            else
                puts ("\nNo Valid results.\n");
        }
    }while (!exit_m);


	return 0;
}


//���ݷ��������к���״̬�����̣�
int make_status()
{
    //״̬����
	tag_state st;
	for (int i=0;i<20;++i)
		st.mask[i/4][i%4] = -1;
	for (int i=0;i<10;++i)
        st.pos[i] = 0;
    //i���Ƶ�ǰ�ڷŵڼ�����״
	int i = 0;
	bool finished = false;
	while (!finished)
	{
	    //�ӵ�ǰ��״��λ��ȡֵ(0-19)�任������
		const int cr = st.pos[i] / 4;
		const int cc = st.pos[i] % 4;
		bool can_place = true;
		//�����Ƿ������ i λ�÷���
		for (int j=0;j<4 && can_place;++j)
		{
			if (shapes[i][j][0]<0 || shapes[i][j][1] < 0)
				break;//��״��ƫ���Ѿ�����
			const int tr = cr + shapes[i][j][0];
			const int tc = cc + shapes[i][j][1];
			if (tr >=5 ||tc >=4)
                can_place = false;//��״��������
			else if (st.mask[tr][tc]>=0)
				can_place = false;//��״��������
		}
		//���ò�����
		if (can_place)
		{
			for (int j=0;j<4;++j)
			{
				if (shapes[i][j][0]<0 || shapes[i][j][1] < 0)
					break;//��״��ƫ���Ѿ�����
				const int tr = cr + shapes[i][j][0];
				const int tc = cc + shapes[i][j][1];
				st.mask[tr][tc] = i;//�����̱�ǵ�ǰ��״λ��
			}
			if (i<9)
			{
				++i;
				continue;//�����ڷ���һ����״
			}
			//������������״�����ʹ�ӡ�������ַ���
			string m;
			for (int r = 0;r < 5; ++r)
			{
				for (int c = 0;c <4;++c)
				{
					if (st.mask[r][c]>=0)
						m += (shapName[(int)st.mask[r][c]]);
					else
						m += ('S');
				}
				m+="\n";
			}
			st.text = m;
			//��ǰ��״�Ƿ��Ѿ�����¼��
			if (all_status_pos.find(m)==all_status_pos.end())
            {
                all_status_pos[m] = status.size();
                status.push_back(st);//��¼
            }

			//�����ǰ״̬��׼�������ڷ�λ��
			for (int j=0;j<4;++j)
			{
				if (shapes[i][j][0]<0 || shapes[i][j][1] < 0)
					break;//��״��ƫ���Ѿ�����
				const int tr = cr + shapes[i][j][0];
				const int tc = cc + shapes[i][j][1];
				st.mask[tr][tc] = -1;
			}
		}

		//�ƽ��ڷ�״̬
		++st.pos[i];
        //�ж����ڷ�״̬��ȫ�����ԣ�Ҫ����ǰһ����״�����ڷ�
		while (st.pos[i]>=20 && i>0)
		{
			st.pos[i] = 0;
			//����
			--i;
			const int er = st.pos[i] / 4;
			const int ec = st.pos[i] % 4;
			//���
			for (int j=0;j<4;++j)
			{
				if (shapes[i][j][0]<0 || shapes[i][j][1] < 0)
					break;//��״��ƫ���Ѿ�����
				const int tr = er + shapes[i][j][0];
				const int tc = ec + shapes[i][j][1];
				st.mask[tr][tc] = -1;
			}
			++st.pos[i];
		}
		if (i==0)
		{
			if (st.pos[i]>=20)
				finished = true;
		}
	}


	return status.size();
}
//���ҵ���״̬�������ڽӱ�
void move_blocks()
{
    size_t sz = status.size();
    for (size_t p = 0; p < sz; ++p)
    {
        tag_state & s = status[p];
        for (int i=0;i<10;++i)//����ѭ��
        {
            const int r = s.pos[i] / 4;
            const int c = s.pos[i] % 4;
            const int mv[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
            for (int j=0;j<4;j++)//Ų������ѭ��
            {
                const int nr = r + mv[j][0];
                const int nc = c + mv[j][1];
                if (nr >=5 || nr <0 || nc >=4 || nc < 0)
                    continue;
                for (int k=0;k<4 ;++k)
                {
                   if (shapes[i][k][0]<0 || shapes[i][k][1] < 0)
                        break;//��״��ƫ���Ѿ�����
                    const int tr = r + shapes[i][k][0];
                    const int tc = c + shapes[i][k][1];
                    s.mask[tr][tc] = -1;
                }
                bool can_place = true;
                //�����Ƿ������ i λ�÷���
                for (int k=0;k<4 && can_place;++k)
                {
                    if (shapes[i][k][0]<0 || shapes[i][k][1] < 0)
                        break;//��״��ƫ���Ѿ�����
                    const int tr = nr + shapes[i][k][0];
                    const int tc = nc + shapes[i][k][1];
                    if (tr >=5 ||tc >=4)
                        can_place = false;
                    else if (s.mask[tr][tc]>=0)
                        can_place = false;
                }
                if (can_place)//׷���ڽӱ�
                {
                    for (int k=0;k<4 ;++k)
                    {
                        if (shapes[i][k][0]<0 || shapes[i][k][1] < 0)
                            break;//��״��ƫ���Ѿ�����
                        const int tr = nr + shapes[i][k][0];
                        const int tc = nc + shapes[i][k][1];
                        s.mask[tr][tc] = i;
                    }
                    string m;
                    for (int ir = 0;ir < 5; ++ir)
                    {
                        for (int ic = 0;ic <4;++ic)
                        {
                            if (s.mask[ir][ic]>=0)
                                m += (shapName[(int)s.mask[ir][ic]]);
                            else
                                m += ('S');
                        }
                        m+="\n";
                    }
                    if (all_status_pos.find(m)==all_status_pos.end())
                    {
                        printf ("%s not find.\n",m.c_str());
                    }
                    else
                        s.neib.push_back(all_status_pos[m]);

                    for (int k=0;k<4 ;++k)
                    {
                        if (shapes[i][k][0]<0 || shapes[i][k][1] < 0)
                            break;//��״��ƫ���Ѿ�����
                        const int tr = nr + shapes[i][k][0];
                        const int tc = nc + shapes[i][k][1];
                        s.mask[tr][tc] = -1;
                    }
                }
                for (int k=0;k<4 ;++k)
                {
                    if (shapes[i][k][0]<0 || shapes[i][k][1] < 0)
                        break;//��״��ƫ���Ѿ�����
                    const int tr = r + shapes[i][k][0];
                    const int tc = c + shapes[i][k][1];
                    s.mask[tr][tc] = i;
                }
            }
        }
    }

}
//�����������
void search_cal(string start)
{
    if (all_status_pos.find(start)==all_status_pos.end())
    {
        printf ("Invalid input shape.\n");
        return;
    }

    const int nStart = all_status_pos[start];
    //������ǣ������ظ������ڵ㡣
    vector<int> mark;
    const size_t nsz = status.size();
    for (size_t i=0;i<nsz;++i)
        mark.push_back(0);

    //������ȶ���1����¼���ֵĽڵ��±�
    std::vector<int> wfs_vec;
    //������ȶ���2����¼�ڵ㸸�׵��±�
    std::vector<int> wfs_from;
    //��ʼ��
    wfs_vec.push_back(nStart);
    wfs_from.push_back(-1);
    mark[nStart] = 1;

    int curr_test = 0;
    bestpath.clear();
    while (curr_test < (int)wfs_vec.size())
    {
        //�ж��Ƿ����
        const int n = wfs_vec[curr_test];
        if (status[n].mask[4][1] == 0 && status[n].mask[4][2] == 0 )
        {//�ܲٵ������
            while (curr_test>=0)
            {
                bestpath.push_front(wfs_vec[curr_test]);
                curr_test = wfs_from[curr_test];
            }
            break;
        }
        //׷�������ڽ��ھ�
        const size_t nebs = status[n].neib.size();
        for (size_t z = 0; z<nebs;++z)
        {
            const int nx = status[n].neib[z];
            if (mark[nx]==0)
            {
                wfs_vec.push_back(nx);
                wfs_from.push_back(curr_test);
                mark[nx] = 1;
            }
        }
        ++curr_test;
    }



}


