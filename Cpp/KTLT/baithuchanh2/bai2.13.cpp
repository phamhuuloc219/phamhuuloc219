#include<stdio.h>
int daonguoc(int n, int sdn)
{
	if (n == 0)
		return sdn;
	else
	{
		sdn = sdn*10 + n%10;
		return daonguoc(n/10, sdn);
	}
}
int main(){
   int n,sdn;
   printf("\nNhap mot so bat ki:");
   scanf("%d", &n);
   printf("\nSau khi dao nguoc :%d", daonguoc(n,sdn));
   return 0;
}
