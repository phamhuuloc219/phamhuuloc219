#include<stdio.h>
int n,i,s,s,s1,d,d1;
void main()
{
	printf("nhap n ");
	scanf("%d",&n);
	s=0; s1=0;d=0;d1=0;
	while (n<0||n>500){
    printf("nhap ");
	scanf("%d",&n);
	}
	printf("so le la: ");
	for(i=1;i<=n;i++){
		if (i%2!=0){d=d+1;printf("%d ",i);s=s+i;}
        }
    printf("\nso chan la: ");    
    for (i=1;i<=n;i++){
	    if (i%2==0){d1=d1+1;printf("%d ",i);s1=s1+i;}   } 
	printf("\nvay ta co %d so le va %d so chan",d,d1);
	printf("\ntong so chan le =%d ",s);
	printf("\ntong so chan chan =%d ",s1);

}
