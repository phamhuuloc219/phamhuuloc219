#include<stdio.h>
#include <math.h>

// ham nhap cac phan tu 
void NhapMang(int a[]){
    int n;
    printf("Nhap so luong phan tu:");scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf(" a[%d]= ",i);scanf("%d",&a[i]);
    }
    printf("\n");
}
// ham xuat cac phan tu trong mang
void XuatMang(int a[]){
    int n;
    printf("Mang vua nhap la:");
    for(int i=0;i<n;i++){
        printf("%6d",a[i]);
    }
}

// ham in cac phan tu la cac so nguyen to
int KiemTraSNT(int n){
    if(n<2)
        return 0;
    else{
        for(int i=2;i<=n;i++){
            if(n%i==0){
                return 0;
            }
              return 1;
        }

    }
}
//ham in so nguyen to
void InSNT(int a[]){
   int n;
    printf("\nCac so nguyen to co trong mang la:");
    for(int i=0;i<n;i++){
        if(KiemTraSNT(a[i])==1){
            printf("%4d",a[i]);
        }
    }
}

// ham kiem tra so chinh phuong
bool check_ChinhPhuong2(int n){
    int x = sqrt(n);
    return x*x == n ? true:false;
}
// ham in so chinh phuong
void SoChinhPhuong(int a[]){
    int n;
    printf("\nCac so chinh phuong co trong mang la:");
        for(int i=0;i<n;i++){
            if(check_ChinhPhuong2(a[i]) == true){
                printf("%d  ", a[i]); 
        }
    }
}

// ham in cac phan tu lon hon gia tri trung binh cua mang
void InPtuLonHonGtriTB(int a[]){
    int n;
	float tb=0,s=0,dem=0;
	printf("\nCac phan tu lon hon gia tri trung binh cua mang la:");
    for(int i=0;i<n;i++){
        s=s+a[i];
        dem=dem+1;
    }
    tb=(float)(s/dem); 
    for(int i=0;i<n;i++){
        if(a[i]>tb){
            printf("%d",a[i]);
        }
}
// ham sap xep cac phan tu tang dan
void Max(int a[],int n){
	int max=a[0];
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	printf("\nmax=%d",max);
}
void SapXepTangDan(int a[]){

	int n,tg;
    printf("\nMang da sap xep la:");
	for (int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
		}
		for(int i=0;i<n;i++){
		printf("%3d",a[i]);
	
	}
	}	
	

// ham sap xep cac phan tu giam dan
void SapXepGiamDan(int a[]) {
	 int n,tg;
    printf("\nMang da sap xep la:");
	for (int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}	
	for(int i=0;i<n;i++){
		printf("%3d",a[i]);
	}
}
int main(){
    int n;
    int a[100];
    NhapMang(a);
    XuatMang(a);
    InSNT(a);
    SoChinhPhuong(a);
    InPtuLonHonGtriTB(a);
	SapXepTangDan(a);
	SapXepGiamDan(a);
	Max(a);
}
