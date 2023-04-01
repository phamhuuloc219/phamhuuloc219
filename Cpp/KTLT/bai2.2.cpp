#include<iostream>
using namespace std;
long long  fibonaci(int n){
    if(n==1 || n==2) return 1;
    return fibonaci(n-1)+ fibonaci(n-2);
}
int main(){
    int n;
    cout<<"nhap so thu:";
    cin>>n;
    cout<<"so thu "<<n<<" trong day fibonaci la: "<<fibonaci(n);

}
