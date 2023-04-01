#include <stdio.h>
#include <math.h>
int i,n;
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
	float ms=0.0,s=0;
	for(i=1;i<=n;i++){
		ts=i;
		ms=ms+i;
	 	s=s+(float)(ts/sqrt(ms));
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

