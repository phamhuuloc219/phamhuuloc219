#include<stdio.h>
int n;
void nhap(){
	printf("nhap n"); scanf("%d",&n);
	while(n<0||n>50){
		printf("nhap n"); scanf("%d",&n);
	}
}
int main(){
	nhap();
}
