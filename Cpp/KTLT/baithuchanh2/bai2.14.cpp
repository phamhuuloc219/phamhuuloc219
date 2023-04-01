#include<iostream>

using namespace std;

int ucln(int a, int b){
    if (b == 0) return a;
    if (a % b == 0) return b;
    return ucln(b, a%b);
}

int main(){
    int a, b;
    cout<<"Nhap a= ";cin>>a;
    cout<<"Nhap b= ";cin>> b;
    cout << "Uoc chung lon nhat cua "<<a<<" va "<<b<<" la: "<<ucln(a, b);
}
