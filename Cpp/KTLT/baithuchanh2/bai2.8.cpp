#include<iostream>
using namespace std;
int C(int k, int n) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    if(k>n) return 0; 
    return C(k - 1, n - 1) + C(k, n - 1);
}
int main(){
    int n, k;
    cout << "Nhap k: ";
    cin >> k;
    cout << "Nhap n: ";
    cin >> n;
    cout << "To hop bang: " << C(k, n);
}
