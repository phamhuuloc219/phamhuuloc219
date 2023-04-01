// tong s= 1+2-3+4-5+...-(n-1)+n
#include <stdio.h>
int i,n,s=1;
void nhapn(){
	printf("nhap n ");
	scanf("%d",&n);
}
void tinhtong(){
	for(i=2;i<=n;i++){
		if(i%2==0){
			s=s+i;
		}
		else {
			s=s-i;
		}
	}
}
void intong(){
	printf("tong= %d",s);
}
int main()
{
	nhapn();
	tinhtong();
	intong();
	return 0;
}

