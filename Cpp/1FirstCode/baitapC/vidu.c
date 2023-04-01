#include<stdio.h>
int a[];
void nhapmang(){
	int n,i;
	printf("nhap so ptu cua mang:");scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("a[%d]",i);scanf("%d",&a[i]);
	}
	printf("cac phan tu vua nhap cua mang la: ");
	for(i=0;i<n;i++) {
	printf("%3d",a[i]);}
}
int main(){
	nhapmang();
	return 0;
}
