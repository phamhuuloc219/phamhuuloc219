#include <iostream>
using namespace std;
int n,i;
int nhapn(){
	cout << "nhap n";
	cin >> n;
	while (n<0||n>50){
		cout<<"nhap n";
		cin>> n;	
	}
}
int tinh(){
	int s=0;
	for (i=1;i<=n;i++){
		if(i%2==0){
		s=s+1/i;}
	}
	cout << "tong s= "<< s;

}

int main()
{
	nhapn();
	tinh();
	return 0;
}
