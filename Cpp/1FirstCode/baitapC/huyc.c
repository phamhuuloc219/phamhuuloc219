#include<stdio.h>
int n,i;
int main(){
	printf("nhap n");
	scanf("%d",&n);
	while (n<0||n>50){
		printf("nhap n");scanf("%d",&n);
	}
	for(i=1;i<=n;i++){
		if(i%1==0 && i%i){
			printf("%d ",&i);
		}
	}
	return 0;
}
