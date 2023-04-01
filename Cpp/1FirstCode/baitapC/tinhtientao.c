#include <stdio.h>
int soluong;
float gia;
int main()
{
	printf (" nhap so tan tao ");
	scanf("%d",&soluong);
	if(soluong<3){ gia=soluong*20000000;}
	else if(soluong<5) {gia=soluong*20000000-soluong*20000000*0.1;
	}
	else if(soluong<7) {gia=soluong*20000000-soluong*20000000*0.2;
	}
	else gia=soluong*20000000-soluong*20000000*0.3;
	printf("thanh tien: %.1f",gia);
	return 0;
}
