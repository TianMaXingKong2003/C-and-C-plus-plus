#include<iostream>
#include<stdio.h> 

using namespace std;

int week(int y,int m,int d)
{
    if (m<3) {
        m+=12;y--;
    }

    int w = (d+2*m+3*(m+1)/5+y+y/4-y/100+y/400+1)%7;
    return w;
}

int main(){
	
	cout<<"ÐÇÆÚ"<<week(2020,2,29); 
	
	return 0;
} 
