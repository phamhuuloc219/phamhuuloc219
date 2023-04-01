#include<stdio.h>
void NhapMang(int a[],int row,int col){
    int n;
    printf("Nhap so luong phan tu:");scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf(" a[%d]= ",i);scanf("%d",&a[i]);
    }
    printf("\n");
}
void XuatMang(int a[],int row,int col){
    int n;
    printf("Mang vua nhap la:");
    for(int i=0;i<n;i++){
        printf("%6d",a[i]);
    }
}
int KiemTraSNT(int n){
    if(n<2)
        return 0;
    else{
        for(int i=2;i<=n;i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
}
void InSNT(int a[],int row,int col){
    int n;
    printf("\nCac so nguyen to co trong mang la:");
    for(int i=0;i<n;i++){
        if(KiemTraSNT(a[i])){
            printf("%4d",a[i]);
        }
    }
}
int main(){
    int n;
    int a[100];
    int row,col;
    NhapMang(a,row,col);
    XuatMang(a,row,col);
    InSNT(a,row,col);
}
