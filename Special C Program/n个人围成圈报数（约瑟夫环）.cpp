//https://blog.csdn.net/qq_25973267/article/details/50405616

#include<iostream>

//	样例测试	
//	6	3	->	1
//	7	3	->	4
//	8	3	->	7
//	9	3	->	1
//	10	4	->	5

using namespace std;

int solve(int n,int m)
{
	int r=0;
	for(int i=2;i<=n;i++)
		r=(r+m)%i;
	return r+1;
}

int main()
{
	cout<<solve(8,3);
	return 0;
}
