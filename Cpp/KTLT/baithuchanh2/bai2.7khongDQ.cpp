#include<iostream>
using namespace std;
int main()
{
    int i, j, n, kq;
    cout<<"Nhap n=";cin>>n;
    for( i = 1; i <= n; i++ )
    {
        cout<<"1";
        kq = 1;
        for( j = 2; j <= i; j++ )
        {
            kq=kq*(i-j+1)/(j-1);
            cout<<"\t"<<kq;
        }
        cout<<endl;
    }
} 
