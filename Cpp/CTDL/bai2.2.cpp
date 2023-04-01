#include<stdio.h>
void tinhtich(int n, int s){
	s=1;
	for(int i=0;i<=n;i++){
		s*=(2*i+1);
	}
	printf("\nTich la:%3d",s);
}
int main(){
	int n,s;
	do
  {
    printf("\nNhap vao so n: ");
    scanf("%d", &n);
    if(n < 1)
    {
      printf("\nSo n phai lon hon hoac bang 1, vui long nhap lai !");
    }
  }while(n < 1);
  tinhtich(n,s);
}
