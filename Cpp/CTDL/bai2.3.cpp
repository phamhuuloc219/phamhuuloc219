#include<stdio.h>
void tinhtong(int n,int s){
	s=0;
	for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                s -= i; 
            } else {
                s += i;  
            }
        }
         
        printf("ket qua=%d",s);

}
int main(){
	int n,s;
	do{
		printf("nhap n=");scanf("%d",&n);
		if(n<1){
			printf("\nSo n phai lon hon hoac bang 1, vui long nhap lai !");
		}
	}while(n<1);
	tinhtong(n,s);
}
