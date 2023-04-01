#include <stdio.h>
int th1;
float th2;
float thuong;
float hieu;
float tong;
float tich;
int main()

{
	printf("toan hang 1= ");
	scanf("%d",&th1);
	printf("toan hang 2= ");
	scanf("%f",&th2);
	tong=th1+th2;
	hieu=th1-th2;
	tich=th1*th2;
	thuong=th1/th2;
	printf("tong 2 so(%d+%.3f) la: %.3f",th1,th2,tong);
	printf("\n hieu 2 so(%d-%.3f) la: %.3f",th1,th2,hieu);
	printf("\n tich 2 so(%d*%.3f) la: %.3f",th1,th2,tich);
	printf("\n thuong 2 so(%d/%.3f) la: %.3f",th1,th2,thuong);
		return 0;
}
