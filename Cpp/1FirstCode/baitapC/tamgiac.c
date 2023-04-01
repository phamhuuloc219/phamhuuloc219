#include <stdio.h>
#include <math.h>
#define pi 3.1416
float a,b,S,rad,goc;
int main()
{
	printf ("nhap a =");
	scanf ("%f",&a);
	printf ("nhap b =");
	scanf ("%f",&b);
	printf ("nhap goc =");
	scanf ("%f",&goc);
	rad=(pi*goc)/180;
	S=(a*b*sin(rad))/2;
	printf("dien tich tam giac= %.3f",S);
	return 0;
}
