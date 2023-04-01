#include<stdio.h>
#include<string.h>
using namespace std;
int dodai(char *s,int dem)
{
if(s[dem]!=’\0’) return dodai(s,dem+1);
else return dem;
}
int main()
{
char s[]=“flajfhuipkljajf”;
cout<<“do dai xau s la:”<<dodai(s,0);
}
