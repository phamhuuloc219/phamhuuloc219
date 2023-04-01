#include <stdio.h>

float dtb,t,v;
int main()
{
	printf("nhap diem toan va van : ");
	scanf("%f%f",&t,&v);
	dtb=(float)(t+v)/2;
	printf("diem trung binh la %.1f:",dtb);
    if(dtb<5){ printf("rot mon");}
    else if (dtb<7){ printf("yeu");}
    else if (dtb<8){ printf("trung binh");}
    else if (dtb<9){ printf("kha");}
    else if (dtb<=10){ printf("gioi");}
	return 0;
}

