#include<stdio.h>
#include<stdlib.h>
int n,i;
void nhapmang(){
	int a[];
	printf("nhap so ptu: ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("a[%d]=",i);scanf("%d",&a[i]);
	}
}
int main(){
	nhapmang();
	int *p = (int *) malloc(25 * sizeof(int));
	
}
