#include <stdio.h>
int n,i;
int s=0;giaithua;
void nhapN(){
	printf("nhap n= ");
	scanf("%d",&n);
}
void nhaplaiN(){
	while (n<0||n>50){
		printf("nhap lai n= ");
		scanf("%d",&n);
	}
}
void tinhgt(){
	giaithua=1;
	for(i=1;i<=n;i++){ giaithua=giaithua*i;s=s+giaithua;
	}
	printf("tong giai thua la: %d",s);
}
int main()
{
	nhapN();
	nhaplaiN();
	tinhgt(); 
	return 0;
}
