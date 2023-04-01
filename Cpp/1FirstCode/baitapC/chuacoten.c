#include <stdio.h>
int n,i;
void nhapN(){
	printf("nhap n ");
	scanf("%d",&n);
	while (n<0||n>100){
	printf("nhap lai n ");
	scanf("%d",&n);	
	}

}
void inN(){
			printf("n=%d",n);
	}
void inle(){
	printf("\n cac so le la ");
	for(i=1;i<=n;i++){
		if(i%2!=0){
			printf("%d ",i);
		}
	}
}
int main()
{
	 nhapN();
     inN();
     inle();
	return 0;
}
