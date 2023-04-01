#include<iostream>
using namespace std;
int giaithua(int n){
	if (n==1) return 1;
	if(n>0) return giaithua(n-1)*n;
}
int main(){
	int n;
	cin>>n;
	cout<<giaithua(n);
}
