#include <stdio.h>
int a,b,c,d;
int main()
{
	printf("nhap a=");scanf("%d",&a);
	printf("nhap b=");scanf("%d",&b);
	printf("nhap c=");scanf("%d",&c);
	printf("nhap d=");scanf("%d",&d);
	printf("%d/%d + %d/%d = ?",a,b,c,d);
	 int ucln(int n1, int n2){
	 	int UNCLN;
	 	while (n1!=n2){
	 		if(n1>n2){
	 			n1=n1-n2;
			 }
			 else
			 {
			 	n2=n2-n1;
			 }
		 }
		 UCLN=n1;
		 return UCLN;
	 }
	int quydong() 
	return 0;
}
