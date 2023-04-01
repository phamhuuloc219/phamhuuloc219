#include <stdio.h>
#include<math.h>
int i,n;
void nhap(){
	while(n<5||n>20){
	printf("nhap n=");
	scanf("%d",&n);
	}
}
void tinhtong(){
	float s=0.0;
	int k,l=0;
	
	for(i=1;i<=n;i++){
		for(k=1;k<=i;k++){
			l=l+k;
		}
	s=(float)s+i/sqrt(l);
	}
	printf("tong=%.3f",s);
}
int main()
{
	nhap();
	tinhtong();
	return 0;
}

