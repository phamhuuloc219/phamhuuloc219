// tinh diem trung binh
#include <stdio.h>
float toan,van,dtb;
int main()
{
	printf("nhap diem toan: ");
	scanf("%f",&toan);
	printf("nhap diem van: ");
	scanf("%f",&van);
	dtb=(toan+van)/2;
	if(dtb<5){printf("rot mon");
	}
    else if(dtb<7){printf("yeu");
	}
	else if(dtb<8){printf("trung binh");
	}
	else if(dtb<9){printf("kha");
	}
	else if(dtb<=10){printf("gioi");
	}
	return 0;
}
