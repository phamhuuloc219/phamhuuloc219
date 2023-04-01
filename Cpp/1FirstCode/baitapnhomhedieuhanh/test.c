#include <unistd.h>
#include<iostream>
using namespace std;
int main(){
 int a[100];
 int n,PhanTu,j,k,x,XoaPT,temp,l;

    cout<<"Bat dau lam bai tap !"<<endl;
    sleep(1);
 cout << "------------------------------------------"<<endl;
    sleep(1);
 cout<<"Nhap n trong a[n], n <100. Xin moi nhap: "<<endl;
 cin>>n;
 for(int i=0;i<n;i++){
  cout<<"Nhap phan tu thu "<<i<<": "<<endl;
  cin>>a[i];
 }  //Nhap mang
 cout<<"a) Nhap de tim kiem phan tu: ";
 cin>>PhanTu;
 for(int i=0;i<=n;i++){
  if(PhanTu==a[i]){
   j=i;
   break;}}
   if(j != NULL || j >= 0){
        cout<<"Tim thay phan tu "<<PhanTu<<" tai vi tri \n"<<j;
    }else{
        cout<<"\nKHONG THAY PHAN TU "<<PhanTu<<j<<endl;
    }   // tim mot phan tu trong danh sach
    
 cout<<"----------------------------------------"<<endl;
  cout<<"b) Chen mot phan tu moi vao danh sach "<<endl;
  sleep(1);
  cout<<"Nhap phan tu can chen: "<<endl;
  cin >> x;
  cout<<"Nhap phan tu co chi so truoc: "<<endl;
  cin>>k;
  sleep(1);
 for (int i = n; i >= k+1; i--){
  a[i] = a[i-1];
 }
 a[k] = x;
 n++;
 cout<<"Ket qua khi chen: ";
 for (int i = 0; i < n; i++){
  cout << a[i] << " ";
 } //chen mot phan tu
 cout<<"----------------------------------------";
 cout<<"\nd) Xoa mot phan tu "<<endl;
  sleep(1);
  cout<<"Nhap phan tu can xoa: "<<endl;
  cin >> XoaPT;
  sleep(1);
  cin >> XoaPT;
 for (int i = XoaPT; i < n; i++){
  a[i] = a[i+1];
 }
 n--;
 cout<<"Ket qua cua phan tu can xoa: ";
 for (int i = 0; i < n; i++){
  cout << a[i] << " \n";
 }
 cout<<"-----------------------------------------"; 
 cout<<"\ne) Sap xep phan tu tu be den lon "<<endl;
 sleep(1);
 cout<<"Ket qua sau khi sap sep: ";
    for (int i = 0; i < n; i++) {
        for (int l = i + 1; l < n; l++) {
            if (a[i] > a[l]) {
                int temp = a[i];
                a[i] = a[l];
                a[l] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    } 
 return 0;
}
