#include<stdio.h>
#include<math.h>
void tinhtien(int n,float tyle,float tienlai,float tiengui){
	printf("nhap so tien von:");scanf("%f",&tiengui);
	printf("nhap lai suat hang nam :");scanf("%f",&tyle);
	printf("nhap so nam muon gui:");scanf("%d",&n);
			for(int i=1;i<=n;i++){
			tienlai=tyle*tiengui*(n-1);
			tiengui+=tienlai;
			if(n%10==0){
				tiengui+=5000000;
			}
			}
		printf("sau %d nam thi tong tien la:%.1f",n,tiengui);
}
int main()
{
	int n;
	float tienlai,tiengui,tyle;
	tinhtien(n,tyle,tiengui,tienlai);
		return 0;
}
