#include <stdio.h>
int n;
void nhapN(){
	printf("nhap n ");
	scanf("%d",&n);
	while (n<2||n>1000){
	printf("nhap lai n ");
	scanf("%d",&n);	
	}

}
void inN(){
			printf("n=%d",n);
			
	}
int kiemtrasnt(int number){
	    int i;
	    int dem=0;
    	for(i=1;i<=number;i++){
    		if(number%i==0){
    			dem=dem+1;
			}
			}
	    if (dem==2){
	    return 1;
		}
		else {
		return 0;
		}
}
void insnt(){
	int j;

	for(j=1;j<=n;j++){
		if(kiemtrasnt(j)==1){
			printf("%d ",j);
		}
	}
}
int main()
{
	 nhapN();
     inN();
     printf("\n cac so nguyen to la ");
     insnt();
 
	return 0;
}
