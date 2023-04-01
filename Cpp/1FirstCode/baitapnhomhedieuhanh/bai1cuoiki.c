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
	printf("\nma tran vua nhap la:\n");
	for(i=0;i<hang;i++){
		for(j=0;j<cot;j++){
			printf("%3d",a[i][j]);	
	}
printf("\n");
}}
/*void hoandoi(int a[][100],int hang,int cot){
	int i,j;
	int min=a[0][0];
	int max=a[0][1];
	for(i=0;i<hang;i++){
		for(j=0;j<cot;j++){
			if(a[i][j]<a[0][0]){
				a[i][j]=min;
			}
			if(a[i][j]>a[0][1]){
				a[i][j]=max;
			}
		}
	}
	prinf("so lon nhat: %d \n so nho nhat: %d",max,min);
}*/
int main(){
	int a[100][100];
	int hang,cot;
	printf("nhap so hang:");scanf("%d",&hang);
	printf("\nnhap so cot:");scanf("%d",&cot);
	nhapmang(a,hang,cot);
	xuatmang(a,hang,cot);
//	hoandoi(a,hang,cot);
}
