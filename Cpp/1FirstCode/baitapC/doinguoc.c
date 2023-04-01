#include <stdio.h>
int n,du,sdn;
int main()
{
	printf(" nhap so : ");
	scanf("%d",&n);
	sdn=0;
	while (n<10 || n>1000000){
	printf(" nhap lai so : ");
	scanf("%d",&n);
	}
	while (n>0){
	du=n%10;
	sdn=du+sdn*10;
	n=n/10;
	}
	printf("so dao nguoc cua la %d ",sdn);
	return 0;
}
