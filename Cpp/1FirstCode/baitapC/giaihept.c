#include <stdio.h>
int a1,b1,c1,a2,b2,c2,d,d1,d2,x,y;
int main()
{
	printf(" nhap he pt1  ");
	scanf("%d%d%d",&a1,&b1,&c1);
	printf(" nhap he pt2  ");
	scanf("%d%d%d",&a2,&b2,&c2);
	printf("phuong trinh co dang:");
	printf("%d x +%d y= %d",a1,b1,c1);
	printf("%d x +%d y= %d",a2,b2,c2);
	d=a1*b2-a2*b1;
	d1=c1*b2-c2*b1;
	d2=a1*c2-a2*c1;
	if (d==0){
	
	if( d1==0 , d2== 0)
	printf("phuong trinh vo so nghiem");
     
     else  printf("phuong trinh vo nghiem");
    }
	 else {
        x=d1/d;
	    y=d2/d;
	}

	printf("nghiem (x,y )cua phuong trinh la (%d,%d)",x,y);
	return 0;
}
