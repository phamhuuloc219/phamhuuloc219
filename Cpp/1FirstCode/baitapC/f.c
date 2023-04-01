#include <stdio.h>
int main()
{
int n, s=0;
do
{
printf("Nhap n 1<n<=21:");
scanf("%d",&n);
}while (n<=1||n>21);

if(n%2==0){
	s=s+n;
}
printf("Tong la %d",s);
}


