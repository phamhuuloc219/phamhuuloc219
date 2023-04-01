// giai hpt
#include <stdio.h>
int a1,a2,b1,b2,c1,c2,x,y,dx,dy,d;
int main()
{
	printf("nhap he pt1: ");
	scanf("%d%d%d",&a1,&b1,&c1);
	printf("nhap he pt2: ");
	scanf("%d%d%d",&a2,&b2,&c2);
	printf("he pt1: %d x + %d y =%d",a1,b1,c1);
	printf("\n he pt1: %d x + %d y =%d",a2,b2,c2);
	d=a1*b2-a2*b1;
	dx=b1*c2-b2*c1;
	dy=a1*c2-a2*c1;
	if(d==0){
		if(dx,dy==0){printf("phuong trinh vo so nghiem ");
		} else printf("phuong trinh vo nghiem"); 
	}
	else {
		x=dx/d;
		y=dy/d;
	}
	printf("\n nghiem (x,y) cua phuong trinh la (%d , %d)",x,y);
	return 0;
}
