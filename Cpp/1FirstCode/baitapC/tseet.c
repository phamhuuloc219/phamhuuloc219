#include<iostream>
#include<cmath>
#define max 100
using namespace std;
void nhap(int a[],int &n){
    
    for(int i = 0; i < n; i++) { 
        cout<<"\nNhap a["<<i<<"]: "; 
        cin>>a[i];

}
}
void xuat(int a[],int n){

    for(int i = 0; i < n; i++) { 
        cout<<" "<<a[i];

}
}
void hoanvi(int &a,int &b){
    int temp=a;
    a=b;
    b= temp;
}
void sapxep(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if(a[i]>a[j]){
                hoanvi(a[i],a[j]);
            }
        }
    }
}
void tron2mang(int a[],int b[],int c[],int na,int nb,int nc){
    nc=na+nb;
    sapxep(a,na);
    sapxep(b,nb);
    int vitriA=0,vitriB=0;
    for(int i=0;i<nc;i++)
    {
        if(vitriA<na&&vitriB<nb)
        {
            if(vitriA<b[vitriB])
            {
                c[i]=a[vitriA];
            }
            else{
                c[i]=b[vitriB];
            }
    }
    else if(vitriB==nb){
        c[i]=a[vitriA++];
    }
    else
        {
            c[i]=b[vitriB++];
        }
    }
}
int main(){
    int a[max],b[max],c[max];
    int na,nb,nc;
    do{
    cout<<"nhap so phan tu mang thu nhat :";
    cin>>na;
    }while( na<=0 || na>max );
    nhap(a,na);
     cout<<"Mang vua nhap la: ";
    xuat(a,na);
    
    do{
    cout<<"\nnhap so phan tu mang thu hai:";
    cin>>nb;
    }while( nb<=0 || nb>max );
    nhap(b,nb);
     cout<<"Mang vua nhap la: ";
    xuat(b,nb);
    tron2mang( a, b, c, na, nb, nc);
    cout<<"\n Mang sau khi tron :";
    xuat(c,nc);
}
