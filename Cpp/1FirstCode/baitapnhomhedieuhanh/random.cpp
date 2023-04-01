#include<stdio.h>
#include<stdlib.h>
void nhapmang(){
	int sz;
	printf("nhap so luong phan tu phat sinh: ");
	scanf("%d",&sz);
	int arr[sz];
	int i;
	for(i=0;i<sz;i++){
		arr[i]=rand()%100;
	}
	printf("cac phan tu cua mang la:");
	for(i=0;i<sz;i++){
		printf("%3d",arr[i]);
	}
}
int main(){
	nhapmang();
}
