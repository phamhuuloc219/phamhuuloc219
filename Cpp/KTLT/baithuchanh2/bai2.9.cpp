#include<stdio.h> 

void chuyendoi(int b, int n)
{
    char chuso[]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
    if(n<=0)
    {
       return;
    }
    chuyendoi(b,n/b);
    printf("%c",chuso[n%b]);
}


int main(){
	int b = 1 ; int n;
	printf("Nhap so muon chuyen doi : ");
	scanf("%d",&n);
    while(b>16 || b<2)
    {
    	printf("Nhap co so: ");

    	scanf("%d",&b);
    }
    printf("\nKet qua chuyen doi : ");
	chuyendoi(b,n);
}
