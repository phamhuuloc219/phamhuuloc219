#include <stdio.h>
#include <math.h>
 
bool check_ChinhPhuong2(int n){
    int x = sqrt(n);
    return x*x == n ? true:false;
}
 
int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int a[n];//Khai báo bi?n a g?m n ph?n t?
     
//Vòng l?p d? nh?p n ph?n t? cho m?ng a
    for(int i = 0; i<n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
     
     
    printf("\nCac so chinh phuong trong mang %d\n", n);
    for(int i=0;i<n;i++){
        if(check_ChinhPhuong2(a[i]) == true){
            printf("%d  ", a[i]);  //N?u ph?n t? th? a[i] trong m?ng là s? chính phuong in ra màn hình s? dó
        }
    }
     
}
