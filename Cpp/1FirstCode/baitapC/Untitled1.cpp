//Cong 2 phan so a/b + c/d
#include<stdio.h>
//khai bao bien
int a,b,c,d;
int TS,MS;

//chuong trinh con
void nhapheso(){
	printf("Nhap a= ");
	scanf("%d",&a);
	printf("Nhap b= ");
	scanf("%d",&b);	
	printf("Nhap c= ");
	scanf("%d",&c);
	printf("Nhap d= ");
	scanf("%d",&d);
}

void inphanso(){
	printf("%d/%d+%d/%d=?",a,b,c,d);
}

int ucln(int n1, int n2){
	int UCLN;
	while(n1!=n2){
		if(n1>n2){
			n1=n1-n2;
		}
		else{
			n2=n2-n1;
		}
	}
	UCLN=n1;
	return UCLN;
}

int quydongmau(){
	int MSC;
	MSC=(b*d)/ucln(b,d);
	return MSC;
}

void tinhtong(){
	MS=quydongmau();
	TS=quydongmau()/b*a+quydongmau()/d*c;
	printf("\nTong cua %d / %d + %d / %d = %d /%d",a,b,c,d,TS,MS);
}

void toigian(){
	printf("\nPhan so sau khi toi gian la: ");
	printf("%d/%d",TS/ucln(TS,MS),MS/ucln(TS,MS));
}

//chuong trinh chinh
int main(){
	nhapheso();
	inphanso();
	tinhtong();
	toigian();
	//ket thuc chuong trinh
	return 0;
}
