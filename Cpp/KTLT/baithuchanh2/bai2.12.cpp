#include<stdio.h>
#define Max 1000000000
int Tong(long N);
int main()
{
    long n;
    do
    {
        printf("Nhap so n (0<n<%d): ",Max);
        scanf("%ld",&n);
    }while(n<0||n>Max);
	printf("Tong cac chu so: %d\n",Tong(n));
}
int Tong(long N)
{
	if(N>0)
        return N%10+Tong(N/10);
    return 0;
}
