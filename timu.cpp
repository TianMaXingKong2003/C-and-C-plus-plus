#include<iostream>
using namespace std;
class T
{
	public :
	static int x;
 } ;
 int T::x;
 int main()
 {
 	T a,b;
 	cout<<a.x<<b.x<<T::x<<endl;
 	a.x=10;
	b.x=20;
 	cout<<a.x<<b.x<<T::x<<endl;
 	return 0;
 }
