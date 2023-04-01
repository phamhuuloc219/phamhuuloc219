#include<iostream>
#include<cstring>
using namespace std;


int main(){
	float a,b;
	char str;
	cout<<" a <op> b ";
	cout<<"\n Nhap a: ";cin>>a;
	tryAgain:
	cout<<"\n Nhap <o>: ";cin>>str;
	if(str!='*'&&str!='/'&&str!='-'&&str!='+')
	goto tryAgain;
	cout<<"\n Nhap b: ";cin>>b;
	switch (str){
		case '+':
			cout<<"\n a + b = "<< a+b;
			break;
		case '-':
			cout<<"\n a - b = "<< a-b;
			break;
		case '*':
			cout<<"\n a * b = "<< a*b;
			break;
		case '/':
			cout<<"\n a / b = "<< a/b;
			break;
	}
	return 0;
}