#include <stdio.h>
#include <stdlib.h>
 void nhapmang(){
 	int i,r,n;
    printf("nhap so luong phan tu phat sinh: ");scanf("%d",&n);
    for(i = 0; i < n; ++i){
        r = rand();
        printf("a[%d]=%3d\n",i,r);
    }
 }
int main(){
       nhapmang(); 
}
