#include <stdio.h>
#include <math.h>
int n;
void nhap(){
	printf("nhap n=");
	scanf("%d",&n);
}
void tinh(){
	int i;
	float s=2.0;
	for(i=2;i<=n;i++){
		s=sqrt(s+sqrt(pow(2,i)));
	}
	printf("tong s= %.5f",s);
}
int main(){
	
	nhap();
	tinh();
	return 0;
}
