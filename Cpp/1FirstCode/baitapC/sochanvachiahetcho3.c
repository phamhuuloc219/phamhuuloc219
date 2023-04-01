#include <stdio.h>
int n,i;
int main()
{
	printf("nhap n= ");
	scanf("%d",&n);
	while (n<100 || n>500){
		printf("nhap lai n= ");
		scanf("%d",&n);
	}
	printf("so chan va chia het cho 3 la: ");
for(i=1;i<=n;i=i+1){ if (i%2==0){
if(i%3==0){ printf(" %d ",i);
}
}
}
	return 0;
}
