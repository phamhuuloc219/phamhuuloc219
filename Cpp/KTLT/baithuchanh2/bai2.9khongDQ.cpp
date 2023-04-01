#include <stdio.h>
void doi(int b, int n)
{
    char chuso[]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
    char d[100];
    int i=0;
    while(n>0)
    {
    	d[i++] = chuso[n%b];    
    	n = n/b;
    }
    i--;
    for(;i>=0;i--)
    {
       printf("%c",d[i]);
    }
}
int main()
{
    int b = 1 ; int n;
	printf("Nhap so muon chuyen doi : ");
	scanf("%d",&n);
    while(b>16 || b<2)
    {
       printf("Nhap co so: ");

       scanf("%d",&b);

    }
    printf("\nKet qua chuyen doi : ");
    doi(b,n);
}


