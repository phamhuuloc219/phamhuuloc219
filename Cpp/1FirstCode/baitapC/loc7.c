// tinh tong cac so nguyen to tu 1-n
#include <stdio.h>
int n;
void nhapN(){
	printf("nhap n= ");
	scanf("%d",&n);
}
void nhaplaiN(){
	while (n<2||n>1000){
		printf("nhap n= ");
	    scanf("%d",&n);
	}	
}
int kiemtrasnt(int number){
	int i,dem=0;
	for (i=1;i<=number;i++){
		if(number%i==0){
			dem=dem+1;
		}}
		if(dem==2){
			return 1;
		}else
		{
			return 0;
		}
	}

void tongsnt(){
	int j,s=0;
	for (j=1;j<=n;j++){
		if(kiemtrasnt(j)==1){
			printf("%d ",j);
					s=s+j;
		}
	}   printf("\ntong cac so nguyen to tu 1-%d la %d",n,s);
}	
 
int main(){
	nhapN();
	nhaplaiN();
	printf("cac so nguyen to tu 1-%d la:",n);	tongsnt();
	return 0;
}
