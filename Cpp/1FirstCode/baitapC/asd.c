#include <stdio.h>
#include <math.h>
int n;
void nhapn(){
	while(n<5||n>20){
		printf("nhap n=");
		scanf("%d",&n);
	}
}
void tinhtong(){
	int i,s=11;
	for(i=5;i<=n;i++){
	if(i%2==0){s=s+pow(2,i);
	}
	else {
		s=s-pow(2,i);
	}
	}
			printf("s= %d",s);
}
int main()
{
	nhapn();
	tinhtong();

	return 0;
}
