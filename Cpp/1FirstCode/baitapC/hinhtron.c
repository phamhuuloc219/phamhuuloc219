#include <stdio.h>
float R;
float pi;
int main()
{
	printf("nhap ban kinh = ");
	scanf ("%f",&R);
	pi=3.14161;
	printf("chu vi duong tron la %.3f",R*pi*2);
    printf("\n dien tich duong tron la %.3f",R*R*pi);

	return 0;
}
