#include <stdio.h>
int n,i,s;
int main()
{
	printf("nhap n= ");
	scanf("%d",&n);
	s=1;
	
	while(n<10||n>100){
		printf("nhap lai n= ");
	scanf("%d",&n);
	}
	for (i=2;i<=n;i++){
		if (i%2==0){ s=s+i;}
		
else
	 if (i%2!=0){ s=s-i;}
	}
	printf("tong la: %d",s);
	return 0;
}
