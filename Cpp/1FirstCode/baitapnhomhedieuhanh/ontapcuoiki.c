#include<stdio.h>
void nhapmt(int a[100][100],int hang,int cot){
	int i,j;
	for(i=0;i<hang;i++){
		for(j=0;j<cot;j++){
			printf("a[%d][%d]=",i,j);scanf("%d",&a[i][j]);
		}
	}
}

void xuatmt(int a[100][100],int hang,int cot){
	int i,j;
	printf("ma tran vua nhap la:\n");
	for(i=0;i<hang;i++){
		for(j=0;j<cot;j++){
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
}
int tong(int a[100][100],int hang,int cot)
{
	int i,j,tong=0;
	for(i=0;i<hang;i++)
	{
		for(j=0;j<cot;j++)
		{
			if(j==cot-i-1)
			{
				tong+=a[i][j];
			}
		}
	}
	return tong;
}

int main(){
	int a[100][100];
	int hang,cot;
	printf("nhap so hang:");scanf("%d",&hang);
		while(hang<3 || hang>6){
			printf("nhap lai so hang:");scanf("%d",&hang);
			
		}
	printf("nhap so cot:");scanf("%d",&cot);
		while(cot<3 || cot>6){
			printf("nhap lai so cot:");scanf("%d",&cot);
			
	}
	nhapmt(a,hang,cot);
	xuatmt(a,hang,cot);
	printf("tong duong cheo phu la:%d",tong(a,hang,cot));
}
