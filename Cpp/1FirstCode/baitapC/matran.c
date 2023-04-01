#include<stdio.h>
int a[3][3];
void nhapmatran(int a[3][3],int row,int col){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("a[%d][%d]=",i,j);scanf("%d",&a[i][j]);
		}
	}
}
void xuatmatran(int a[3][3],int row,int col){
	int i,j;
	printf("ma tran vua nhap la:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
void inchan(int a[3][3],int row,int col){
	int i,j;
	printf("ma tran chan la:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(a[i][j]%2==0){
				printf("%3d",a[i][j]);
			}
			else{
				printf("  *");
			}
		}
		printf("\n");
	}
}
void inle(int a[3][3],int row,int col){
	int i,j;
	printf("ma tran le la:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(a[i][j]%2!=0){
				printf("%3d",a[i][j]);
			}
			else{
				printf("  *");
			}
		}
		printf("\n");
	}
}
void trendcc(int a[3][3],int row,int col){
	int i,r,j;
	printf("cac phan tu nam tren duong cheo chinh la:\n");
	for(i=0;i<row;i++){
		for(r=0;r<i;r++){
			printf("   ");
			}
		for(j=i;j<col;j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
void duoidcc(int a[3][3],int row,int col){
	int i,j;
	printf("cac phan tu nam duoi duong cheo chinh la:\n");
	for(i=0;i<row;i++){
		for(j=0;j<i;j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
void trendcp(int a[3][3],int row,int col){
	int i,j;
	printf("cac phan tu nam tren duong cheo phu la:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col-i;j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
void duoidcp(int a[3][3],int row,int col){
	int i,j;
	printf("cac phan tu nam duoi duong cheo phu la:\n");
	for(i=0;i<row;i++){
		for(j=row-i;j<row;j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
void tongdcc(int a[3][3],int row,int col){
	int i,j,s=0;
	for (i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(i==j)
			s=s+a[i][j];
		}
	}
		printf("tong duong cheo chinh la:%d",s);
}
void tongdcp(int a[3][3],int row,int col){
	int i,j,s=0;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(j==row-i-1)
			s=s+a[i][j];
		}
	}
	printf("\ntong duong cheo phu la:%d",s);
}
void tonghang(int  a[3][3],int row,int col){
	int i,j,s=0;
	for(i=0;i<row;i++){
		for(j=0;j<col;i++){
			s+=a[i][j];	
		}
	printf("\ntong cua hang thu %d la:%d",i,a[i][j]);
	}
}
int main(){
	nhapmatran(a,3,3);
	xuatmatran(a,3,3);
	inchan(a,3,3);
	inle(a,3,3);
	trendcc(a,3,3);
	duoidcc(a,3,3);
	trendcp(a,3,3);
	duoidcp(a,3,3);
	tongdcc(a,3,3);
	tongdcp(a,3,3);
	tonghang(a,3,3);
	return 0;
}
