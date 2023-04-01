#include<stdio.h>
void nhap(){
	int n;
	 float s;
	s=0.0;
	do{
		printf("nhap n=");scanf("%d",&n);
		if(n<1){
			printf("nhap lai n phai lon hon 1=");
			scanf("%d",&n);
		}
	}while(n<1);

	for(int i=0;i<=n;i++){
		s+=1.0/i;
	}
	printf("ket qua = %.2f",s);
}
int main(){
	nhap();
	
}
