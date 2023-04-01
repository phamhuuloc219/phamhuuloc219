#include<iostream>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";cin>>a[i];
	}
}
void xuat(int a[],int n){
	cout<<"mang vua nhap la:";
	for(int i=0;i<n;i++){
	cout<<" "<<a[i];
	}
}
void max(int a[],int n){
	int max=a[0];
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	cout<<endl;
	cout<<"max="<<max;
}
int main(){
	int a[10];
	int n;
	cout<<"nhap n=";cin>>n;
	nhap(a,n);
	xuat(a,n);
	max(a,n);
}
