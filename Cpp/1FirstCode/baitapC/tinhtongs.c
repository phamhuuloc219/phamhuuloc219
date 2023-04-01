#include <stdio.h>
int i,n;
void nhap(){
	printf("nhap n=");
	scanf("%d",&n);
}
void nhaplai(){
	while (n<0||n>10){
		printf("nhap n=");
		scanf("%d",&n);
	}
}
void tong(){
	float s=0;
	for(i=0;i<=n;i++){
		s=s+(float)(2*i+1)/(i+1);
	}
	printf("tong= %.3f",s);
}
int main()
{
	nhap();
	nhaplai();
	tong();
	return 0;
}
