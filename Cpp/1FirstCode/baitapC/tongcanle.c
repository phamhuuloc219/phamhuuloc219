#include <stdio.h>
#include<math.h>
int n,i;
float s;
void main()
{
	printf(" nhap n= ");
	scanf("%d",&n);
	s=0;
	while (n<0||n>90){
		printf("nhap lai n= ");
		scanf("%d",&n);
	}
	for (i=1;i<=n;i++){
		if(i%2!=0){
			s=s+sqrt(i);
		}
	}
	printf("tong s= %.3f",s);
}
