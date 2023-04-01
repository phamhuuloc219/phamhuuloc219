#include<stdio.h>
int logarit(int n){
	int dem=0;
	while(n>=10){
		n/=10;
		dem++;
	}
	return dem;
}
int main(){
	int n;
	do{
		printf("nhap n=");scanf("%d",&n);
		if(n<1){
			printf("\nSo n phai lon hon hoac bang 1, vui long nhap lai !");
		}
	}while(n<1); 
	printf("So luong chu so cua so nguyen la:%d",logarit(n)+1);
}
