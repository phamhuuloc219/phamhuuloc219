#include<stdio.h>
int n,i;
void nhap(){
	printf("nhap n=");
	scanf("%d",&n);
}
void nhaplai(){
	while (n<0||n>100){
		printf("nhap n=");
		scanf("%d",&n);
	}
}
void tong(){
	int ts;
	float s=0,ms=1.0;
	for (i=1;i<=n;i++){
		ts=2*i;
		ms=ms*(2*i-1);
		s=s+(float)(ts/ms);
	}
	printf("tong= %f",s);
}
int main()
{
	nhap();
	tong();
	return 0;
}
