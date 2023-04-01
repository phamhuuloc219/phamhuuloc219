#include<stdio.h>  


int main()  
{  
 int n1=0,n2=1,n3,i,spt;  
  
 printf("Ban hay nhap so phan tu trong day Fibonacci: ");  
 scanf("%d",&spt);  
 printf("\n%d %d",n1,n2); 
  
 for(i=2;i<spt;++i)  
 {  
  n3=n1+n2;  
  printf(" %d",n3);  
  n1=n2;  
  n2=n3;  
 }  
}
