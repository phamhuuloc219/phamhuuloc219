#include<stdio.h>
#include<math.h>
void cauA(int n,float x){
	float f=0.0;	
	f=pow(x,n);         
	printf("\na.Luy thua %.f^%d=%.f",x,n,f);
} 
void cauB(int n){
	int giaithua=1;
	for(int i=1;i<=n;i++){ 
	giaithua=giaithua*i;	
	}
	printf("\nb. %d!: %d",n,giaithua);
}
void cauC(int n){
	int s=0;
	for(int i=1;i<=n;i++){
		s+=i;
	}
	printf("\nc.s(%d) = 1 + 2 + ... + n=%d",n,s);
}
void cauD(int n){
	int s=0;
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			s+=i;
		}
	}
	printf("\nd.s(%d) = 1 + 3 + 5+  ... + (2n-1)=%d",n,s);
}
void cauE(int n){
	int s=0;
	for(int i=2;i<=n;i++){
		if(i%2==0){
			s+=i;
		}
	}
	printf("\ne.s(%d) = 2 + 4 + 6+  ... + (2n)=%d",n,s);
}
int kiemTraNT(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n>1;	
}

int cauF(int n)
{
	int s = 0;
	for(int i = 1; i <= n; i++){
		if(kiemTraNT(i) == 1)
		s += i;
	}return s;
}

int cauG(int n)
{
	int dem = 0;
	for(int i = 1; i <= n; i++){
		if(kiemTraNT(i) == 1)
		dem++;
	} return dem;
}
int main(){
	int n;
	float x;
	printf("Nhap n =");scanf("%d",&n);
	printf("Nhap x =");scanf("%f",&x);
	cauA(n,x);
	cauB(n);
	cauC(n);
	cauD(n);
	cauE(n);
	printf("\nf.Tong so nguyen to <=%d",cauF(n),n);
	printf("\ng.Co %d so nguyen to <=%d",cauG(n),n);
}
