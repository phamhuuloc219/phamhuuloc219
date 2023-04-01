#include<stdio.h>
void nhapMatran(int a[50][50],int row,int col){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("a[%d][%d]=",i,j);scanf("%d",&a[i][j]);
		}
	}
}
void xuatMatran(int a[50][50],int row,int col){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
void tinhTong(int a[50][50],int row,int col){
	int i,j;
	int tong=0;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(j=col-1-i){
				tong+=a[i][j];
			}
		}
	}
	printf("tong duong cheo phu= %d",tong);

}
int main(){
	int a[50][50],row,col;
	printf("nhap so hang cua ma tran= "); scanf("%d",&row);
	printf("nhap so cot cua ma tran= "); scanf("%d",&col);
	nhapMatran(a,row,col);
	xuatMatran(a,row,col);
	tinhTong(a,row,col);
	return 0;
}
