#include <stdio.h>
int giaiThua(int n)
{
    if (n == 1)
        return 1;
    return n * giaiThua(n - 1);
}
int main()
{
    int n;
	do{
		printf("nhap n=");scanf("%d",&n);
		if(n<1){
			printf("\nSo n phai lon hon hoac bang 1, vui long nhap lai !");
		}
	}while(n<1);   
	 printf("Giai thua %d la: %d", n, giaiThua(n));
    return 0;
}
