#include <iostream>
using namespace std; 
long ChuSoLonNhat(long n,long &max)
{   
    long m;
    if(n==0)
         return max;
    else
    {
        m=n%10;
        if(m>max)
             max=m;
    }    
    return ChuSoLonNhat(n/10,max);
}
int main(){
	long n,max;
	cout<<"Nhap so nguyen duong n= ";cin>>n;
	cout << ChuSoLonNhat(n,max);
}
