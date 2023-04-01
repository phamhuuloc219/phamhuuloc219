#include<stdio.h>
int a[];
int n,i;
void nhapmang(){
	printf("nhap so ptu: ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("a[%d]=",i);scanf("%d",&a[i]);
	}
}
void sapxep(){
	int tg,j;
	for (i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
	printf("mang da sap xep la:");
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
	printf("\ncac so le trong mang la:");
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			printf("%3d",a[i]);
		}
	}
}
void sochan(){
	printf("\nso chan co trong mang tru so 0 la:");
	for(i=0;i<n;i++){
		if(a[i]%2==0 && a[i]!=0){
			printf("%3d",a[i]);
		}
	}
}
int main(){
	nhapmang();
	sapxep();
	boi();
	uoc();
	sole();
	sochan();
	return 0;
}
