#include <iostream>
int n,s=0;
using namespace std;
int main()
{
	cout<<"nhap n= ";
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			s=i+2;
		}
	}
	cout<<"tong s="<< s;
	return 0;
}
