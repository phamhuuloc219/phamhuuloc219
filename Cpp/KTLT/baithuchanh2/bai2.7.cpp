#include<iostream>
using namespace std;
int C(int k, int n) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}
int main(){
    int n;
    cin >> n;
    cout << "---------PASCAl---------" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = n; j > i; j--)
            cout << " ";
        for (int j = 0; j <= i; j++) {
            cout << C(j, i) << " ";
        }
        cout << endl;
    }
    return 0;
}
