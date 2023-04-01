#include<stdio.h>
#include<math.h>
float cauA(float x,int n){
	if(n==1)	return x;
	else return cauA(x,n-1)*x;
}
int cauB(int n){
	if(n<=1){
		return 1;
	}
	return n*cauB(n-1);
}
int cauC(int n){
	if(n==1){
		return 1;
	}
	return cauC(n-1)+n;
}
int cauD(int n){
	if(n==1)	return 1;
	if(n%2==0){
		return cauD(n-1);
	}
	else return n+cauD(n-1);
}
int cauE(int n){
	if(n==0)	return 0;
	if(n%2==1){
		return cauE(n-1);
	}
	return cauE(n-1)+n;
}
int KiemTra(int n)
{
	int i;
    if(n<2) return 0;
	if(n==2) return 1;
	for( i=2;i<n;i++)
	if(n%i==0) return 0;
	return 1;
}

int cauF(int n)
{
    int tong = 0;
    if( n==2 ) tong = 2;
    else
    if( KiemTra(n)==0 ) tong = cauF(n-1);
    else
    if( KiemTra(n)==1 ) tong = n + cauF(n-1);
    return tong;
}
bool check(int n)
{
	int dem=0;
	for(int i=1; i<=n; i++)
		if (n % i == 0 && n>0)
			dem++;
	if (dem==2)
		return true;
	return false;
}
int cauG( int n) {
	if(n<1){
		return 0;
	}
	else{
		return check(n-1) ? cauG(n-1) + 1 : cauG( n-1);
	}
}
int main(){
	int n;
	float x;
	printf("Nhap x :");scanf("%f",&x);
	do{
	printf("Nhap n :");scanf("%d",&n);
}while(n<0);
	printf("-------------------------------------------------------\n");
	printf("a.f(%.f, %d) =x^n = %.f",x,n,cauA(x,n));
	printf("\nb.f(%d)=n! = %d",n,cauB(n));
	printf("\nc.s(%d) = 1 + 2 + ... + n = %d",n,cauC(n));
	printf("\nd.s(%d) =  1 + 3 + 5 + ... + (2n - 1) = %d",n,cauD(n));
	printf("\ne.s(%d) =  2 + 4 + 6 + ... + (2n) = %d",n,cauE(n));
	printf("\nf.Tong cac so nguyen to <= %d = %d",n,cauF(n));
	printf("\ng.so nguyen to < %d co : %d so",n,cauG(n));
}
