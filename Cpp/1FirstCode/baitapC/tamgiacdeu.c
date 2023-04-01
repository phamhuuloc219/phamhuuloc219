#include <stdio.h>
float a,s;
int main()
{
	printf ("nhap canh tam giac deu: ");
	scanf("%f",&a);
	s=(a*a*sqrt(3))/4;
	printf ("dien tich tam giac deu la: %.3f",s);
	return 0;
}
