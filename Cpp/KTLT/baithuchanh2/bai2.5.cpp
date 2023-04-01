#include<iostream>
using namespace std;
void nhapMang(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"Phan tu thu "<<i<<"=";cin>>a[i];
	}
}
void xuatMang(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"\t"<<a[i];
	}
}
void SapXep(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]<a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

int TimX(int a[], int n, int x) {
	n--;
    if (n < 0) {
        return -1;
    }
    if (a[n] == x) {
        return n;
    }
    return TimX(a, n, x);
 
}
int main(){
	int a[100];
	int n;
	cout<<"Nhap so luong phan tu:";cin>>n;
	nhapMang(a,n);
	cout<<"Mang vua nhap la:";
	xuatMang(a,n);
	SapXep(a,n);
	cout<<"\nMang vua sap xep la:";
	xuatMang(a,n);
	int x;
	cout<<"\nNhap gia tri can tim :";cin>>x;
	cout<<"Gia tri "<<x<<" can tim o vi tri:"<<TimX(a,n,x);
}
