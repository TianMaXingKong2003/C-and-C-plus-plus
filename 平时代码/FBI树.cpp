#include<cstdio>  
#include<cstring>  
  
const int maxn=(1<<10);  
char s[maxn+20];  
  
int write(int l,int r)  
{  
  if(l==r)  
    {  
      printf("%c",(s[l]=='0')?'B':'I');  
      return s[l]=='1';  
    }  
  int sl,sr,k=(l+r)/2;  
  sl=write(l,k),sr=write(k+1,r);  
  if(sl+sr==0){printf("B");return 0;}  
  if(sl+sr==2){printf("I");return 1;}  
  printf("F");  return 3;  
}  
  
int main()  
{  
  scanf("%s%s",s,s);  
  write(0,strlen(s)-1);  
  return 0;  
}  
