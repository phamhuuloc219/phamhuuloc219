// doi nguoc vi tri cua so
#include <stdio.h>
int n,sdn,du;
int main()
{
	printf("nhap n= ");
	scanf("%d",&n);
	sdn=0;
	while (n<10||n>1000000){
		printf("nhap lai n= ");
		scanf("%d",&n);
	}
	while (n>0){
	
	du=n%10;
	sdn=du+sdn*10;
	n=n/10;
}
	printf("so vua doi la: %d",sdn);
	return 0;
}

