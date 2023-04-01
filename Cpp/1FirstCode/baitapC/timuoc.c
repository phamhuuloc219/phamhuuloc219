#include <stdio.h>
int n,i,s=0;
void nhapN(){
	printf("nhap so= ");
	scanf("%d",&n);
}
void nhaplaiN(){
	while (n<5||n>100){
	    printf("nhap lai so = ");
	    scanf("%d",&n);
	}
}
void uoc(){
	for(i=1;i<n;i++){
        if(n%i == 0){
           printf("%d ",i);
           s=s+i;
        }
    }
}

int main()
{
	nhapN();
	nhaplaiN();
	printf("cac uoc cua %d la: ",n);
	uoc();
	printf("\n tong la: %d",s);
	return 0;
}
