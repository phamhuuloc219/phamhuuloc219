//Viet ham dem cac phan tu la so nguyen to trong mang.

#include<iostream>
#include<time.h>
#define MAX 100
using namespace std;


void NhapMang(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"\nPhan tu thu " << i <<": ";
		cin>> a[i];
	}
}

void MangNgauNhien(int a[], int n)
{
	srand((unsigned)time(NULL));
	for(int i=0; i<n; i++)
		a[i]=rand()%100 - rand()%100;
}

void XuatMang(int a[], int n)
{
	for(int i=0; i<n; i++)
		cout<< a[i] <<"\t";
}

bool KiemTraSNT(int x)
{
	int dem=0;
	for(int i=1; i<=x; i++)
		if (x % i == 0 && x>0)
			dem++;
	if (dem==2)
		return true;
	return false;
}

void DemPTSNT(int a[], int n)
{
	int DemSNT=0;
	for(int i=0; i<n; i++)
	{
		if(KiemTraSNT(a[i])==true)
			DemSNT = DemSNT + 1;
	}
	cout<<"\nSo nguyen to co trong Mang la: "<< DemSNT;
}

void main()
{
	int a[MAX], n, x;
	
	cout<<"So luong phan tu thuc: "; cin>>n;
	//NhapMang(a,n);

	MangNgauNhien(a,n);

	XuatMang(a,n);

	DemPTSNT(a,n);

	cout<<endl;
}
