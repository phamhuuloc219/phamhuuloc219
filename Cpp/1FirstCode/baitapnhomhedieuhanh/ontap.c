#include<stdio.h>
void nhapmang(int a[100][100],int hang,int cot){
	int i,j;
	for(i=0;i<hang;i++){
		for(j=0;j<cot;j++){
			printf("a[%d][%d]=",i,j);scanf("%d",&a[i][j]);
		}
	}
}
void xuatmang(int a[100][100],int hang,int cot){
	int i,j;
	printf("ma tran vua nhap la:\n");
	for(i=0;i<hang;i++){
		for(j=0;j<cot;j++){
			printf("%3d",a[i][j]);
		}
			printf("\n");
	}
}
/*void hoandoi(int a[100][100],int hang, int cot){
	int i,j;
	for(i=0;i<hang;i++){
		for(j=0;j<cot;j++){
			
		}
	}
}*/
int main(){
	int a[100][100];
	int hang,cot;
	printf("nhap so hang: ");scanf("%d",&hang);
	printf("nhap so cot: ");scanf("%d",&cot);
	nhapmang(a,hang,cot);
	xuatmang(a,hang,cot);
}
