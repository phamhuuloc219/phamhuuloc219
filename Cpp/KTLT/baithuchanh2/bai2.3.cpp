#include <iostream>
#include<math.h>
using namespace std;

int main() {
 int n,k,h;
 double s;
  
  cout<<"Nhap n con vi trung: ";
  cin>>n;
  cout<<"\nNhap so lan muon nhan ban sau 1 gio: ";
  cin>>k;
  cout<<"\nNhap so gio can nhan ban: ";
  cin>>h;
	s=	pow(n*k,h+1);
  cout<<s;

}
