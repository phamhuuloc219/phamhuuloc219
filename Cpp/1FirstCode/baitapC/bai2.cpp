#include<iostream>
#include<math.h>
using namespace std;
int n,i;
float s=2.0;
int main(){
	cout<<"nhap n";
	cin>> n;
	for(i=2;i<=n;i++){
		s=sqrt(s+sqrt(pow(2,i)));
	}
	cout<<"tong s="<<s;
}
