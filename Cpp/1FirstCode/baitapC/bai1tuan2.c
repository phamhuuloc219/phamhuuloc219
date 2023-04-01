#include<stdio.h>
int n;
void nhap(){
	printf("nhap n");
	scanf("%d",&n);
	while(n<0||n>15){
		printf("nhap n");
   		scanf("%d",&n);
	}
}
float tich(){
	int mau=1,i;
	float t=0.0;
	for(i=1;i<=n;i=i+2){
		mau=i*mau;
		t+=(float)(i+1)/mau;
	}

	printf("tich= %.3f",t);
}
int main(){
	nhap();
	tich();
	return 0;
}
