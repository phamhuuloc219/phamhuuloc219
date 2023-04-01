#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
//Nhap ma tran
void NhapMaTran(int a[10][10],int row,int col){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<"a["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}
	}
}
//Xuat ma tran
void XuatMaTran(int a[10][10],int row,int col){
	cout<<"Ma tran vua nhap la:\n";
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<"\t"<<a[i][j];
		}
		cout<<endl;
	}
}
//Tinh trung binh cac phan tu trong ma tran
void TBMaTran(int a[10][10],int row,int col){
	int s=0,dem=0;
	float tb=0.0;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			s+=a[i][j];
			dem+=1;
		}
	}
	tb=s/dem;
	cout<<"\nTrung binh cong cua ma tran la :"<<tb;
}
//tim phan tu lon nhat trong ma tran
int PtuLonNhat(int a[10][10],int row,int col){
	int max = a[0][0];
   for(int i = 0; i < row; i++)
      for(int j = 0; j < col; j++)
         if(a[i][j]>max)
            max = a[i][j];
   return max;
}
//tim phan tu lon nhat tren dong i
int  PtuMaxDong(int a[10][10],int row,int col){
	int n;
	cout<<"\nNhap dong can tim GTLN:";cin>>n;
	for(int i=n;i<row;i++){
		int max=a[i][0];
		for(int j=0;j<col;j++){
			if(max<a[i][j]){
				max=a[i][j];
			}
		}
		return max;
	}
}
//tim phan tu lon nhat tren cot j
int PtuMaxCot(int a[10][10],int row,int col){
	int n;
	cout<<"\nNhap cot can tim GTLN:";cin>>n;
	for(int j=n;j<col;j++){
		int max=a[0][0];
		for(int i=0;i<row;i++){
			if(max<a[i][j]){
				max=a[i][j];
			}
		}
		return max;
	}
}
//kiem tra so nguyen to
int KiemTraNguyenTo(int n){
	if(n < 2){
		return 0;
	}
	else if(n > 2){
		if(n % 2 == 0)
	{
	return 0;
	}
	for(int i = 3; i < n; i += 2){
		if(n % i == 0){
			return 0;
		}
	}	
}
	return 1;
}
// dem so luong so nguyen to co trong ma tran
int DemSNT(int a[10][10], int row, int col){
	int dem = 0;
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			if(KiemTraNguyenTo(a[i][j]) == 1){
				dem++;
			}
		}
	}
	return dem;
}
// sap xep tang dan theo dong
void SapXep(int a[10][10], int row, int col)
{
   for(int k = 0; k<col ; k++)
      for(int i = 0; i<row-1 ; i++)
      for(int j = row-1; j>i ; j--)
      if(a[k][j]<a[k][j-1])
      {
         int temp = a[k][j];
         a[k][j] = a[k][j-1];
         a[k][j-1] = temp;
      }
    cout<<"Ma tran vua sap xep la:\n";
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<"\t"<<a[i][j];
		}
		cout<<endl;
	}
}
int main(){
	int a[10][10];
	int row,col;
	cout<<"Nhap so hang:";cin>>row;
	cout<<"Nhap so cot:";cin>>col;
	NhapMaTran(a,row,col);
	XuatMaTran(a,row,col);
	TBMaTran(a,row,col);
	cout<<"\nPhan tu lon nhat ma tran la:"<<PtuLonNhat(a,row,col);
	cout<<"Phan tu lon nhat hang la:"<<PtuMaxDong(a,row,col);
	cout<<"Phan tu lon nhat cot la:"<<PtuMaxCot(a,row,col);
	int dem=DemSNT(a,row,col);
	cout<<"\nMa tran co "<<dem<<" so nguyen to.";
	cout<<"\nSap xep tang dan theo dong:";
	SapXep(a,row,col);
}
