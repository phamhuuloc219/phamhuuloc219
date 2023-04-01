#include<iostream>
#include <math.h>
using namespace std;

void NhapMang(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"]=";cin>>a[i];
    }
}

void XuatMang(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<"\t"<<a[i];
    }
}

int Tong(int a[], int n)
{
    if (n == 1)
        return a[0];
    return Tong(a, n-1) + a[n-1];
}

int TongDuong(int a[], int n)
{
	if (n==0) return 0;
	else
	{
    	if (a[n-1]>0) return TongDuong(a,n-1) + a[n-1];
		else
		return TongDuong(a,n-1);
    }
}
bool check(int n) {
	if (n <= 1) return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
		return false;
	return true;
}
int dem(int a[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (check(a[i]) == true)
		count++;
		}
	return count;
}

int max(int a[],int n)
{
      if(n==1) return a[0];
      if (a[n-1]>max(a,n-1)) return a[n-1];
      return max(a,n-1);
}
int main(){
    int n;
    int a[100];
    cout<<"Nhap so luong phan tu:";cin>>n;
    NhapMang(a,n);
    cout<<"Mang vua nhap la:";
	XuatMang(a,n);
	cout<<"\nTong cac phan tu trong mang la :"<<Tong(a,n);
	cout<<"\nTong cac phan tu duong trong mang la :"<<TongDuong(a,n);
    cout <<"\nSo luong cac so nguyen to la: " << dem(a,n);
    cout<<"\nPhan tu lon nhat trong mang la:"<<max(a,n);
}
