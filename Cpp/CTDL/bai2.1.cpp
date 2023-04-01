#include<stdio.h>
void tinhtong(int n){
  float S;
  S = 0;
  for( int i = 1; i <= n; i++){
    S = S + 1.0 / i;
  }
  printf("\nTong 1 + 1/2 + ... + 1/%d la: %.2f",n, S);
}
int main()
{
	int n;
	do
  {
    printf("\nNhap vao so n: ");
    scanf("%d", &n);
    if(n < 1)
    {
      printf("\nSo n phai lon hon hoac bang 1, vui long nhap lai !");
    }
  }while(n < 1);
  tinhtong(n);
}
