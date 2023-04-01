#include<stdio.h>
int n,i;
int a[];
void nhapxuat(){
	printf("so phan tu cua manh:");scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("a[%d]=",i);scanf("%d",&a[i]);
	}
	printf("cac mang vua nhap la:");
	for(i=0;i<n;i++){
		printf("%3d",a[i]);
	}
}
void sapxep(){
	int tam,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]<a[j]){
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;				
			}
		}
	}
	printf("\nmang sau sap xep la:");
	for(i=0;i<n;i++){
		printf("%3d",a[i]);
	}
}
void boi(){
	printf("\nboi cua 3 la:");
	for(i=0;i<n;i++){
		if(a[i]%3==0){
			printf("%3d",a[i]);
		}
	}
}
void uoc(){
	printf("\nuoc cua 12 la:");
	for(i=0;i<n;i++){
		if(12%a[i]==0){
			printf("%3d",a[i]);
		}
	}
}
void sole(){
	printf("\nso le trong mang la:");
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			printf("%3d",a[i]);
		}
	}
}
void sochan(){
	printf("\nso chan trong mang la:");
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			printf("%3d",a[i]);
		}
	}
}
int main(){
	nhapxuat();
	sapxep();
	boi();
	uoc();
	sole();
	sochan();
	return 0;
}
