#include <stdio.h>
int a,b,c,max;
int main()
{
	printf("nhap a= ");
	scanf("%d",&a);
	printf("nhap b= ");
	scanf("%d",&b);
	printf("nhap c= ");
	scanf("%d",&c);
	max=a;
	if (max<b){
		max=b;
	}
	if (max<c){
		max=c;
	}
	printf ("max la %d",max);
	return 0;
}
