#include<iostream>
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
        cout <<a[i] << " ";

}
}
void sapxep(int a[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
}
void MangTron(int a[], int na, int b[], int nb, int c[], int nc)
{
	nc=0;
   for(int i = 0; i < na; i++)
    {
        c[nc] = a[i];
        nc++;
    }
    nc = na;
    for(int j = 0; j < nb; j++)
    {
        c[nc] = b[j];
        nc++;
    }
    sapxep(c,nc);
    for(int i = 0; i < nc; i++)
    {
        cout<<" "<<c[i];
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
    sapxep(a,na);
    cout<<"\nMang thu nhat vua sap xep la:";
    xuat(a,na);
    do{
    cout<<"\nnhap so phan tu mang thu hai:";
    cin>>nb;
    }while( nb<=0 || nb>max );
    nhap(b,nb);
     cout<<"Mang vua nhap la: ";
    xuat(b,nb);
    sapxep(b,nb);
    cout<<"\nMang thu hai vua sap xep la:";
    xuat(b,nb);
    cout<<"\nMang tron va duoc sap xep la:";
    MangTron(a,na,b,nb,c,nc);

}
