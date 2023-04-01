#include <stdio.h>
#include <math.h>

float tinha(float p,float r,int n){
    return p * pow((1+r),n);
}
int main(){
    float p,r;
    int n;
    printf("Nhap tien von, lai suat, so nam: ");
    scanf("%f,%f,%d",&p,&r,&n);
    printf("Nam\t Tong tien\n");
    for(int i=1;i<=n;i++){
        printf("%d\t%g\n",i,tinha(p,r,i));
    }
}
