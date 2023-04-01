#include<stdio.h>
int UCLN(int a, int b){
	if(b==0){
		return a;
	}
	return UCLN(b,a%b);
}
int BCNN(int a, int b){
	return (a*b)/UCLN(a,b);
}
int main(){
	int a,b;
	printf("Nhap so nguyen duong a=");
	scanf("%d",&a);
	printf("Nhap so nguyen duong b=");
	scanf("%d",&b);
	printf("-----------------------------------");
	printf("\nUCLN cua %d va %d la: %d",a,b,UCLN(a,b));
	printf("\nBCNN cua %d va %d la: %d",a,b,BCNN(a,b));
}
