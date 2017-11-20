#include <iostream>
#include <string>
using namespace std;
const char nc[20]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J'};
string ans;
int main()
{
	int m, n, k, t, s;
	while(cin >> n >> m){
		
		ans = "";
		s = n;
		while(n != 0){
			k = n % m;
			t = n / m;
			if(k < 0){
			k -= m;
			t++;
			}
			n = t;
			ans.push_back(nc[k]);
		}
		
		
		cout << s << "=";
		for(int i = ans.length() - 1; i >= 0; i--)
			cout << ans[i];
		cout << "(base" << m << ")" << endl;
	}

}
