#include <stdio.h>

int main(){
     int n;
     printf("Nhap n: ");
     scanf("%d",&n);
     int f,f1,f2;
     f=f1=f2=1;
     for(int i=3;i<=n;i++){
        f=f1+f2;
        f1=f2;
        f2=f;
     }
     printf("F(%d) = %d",n,f);
     return 0;
}
