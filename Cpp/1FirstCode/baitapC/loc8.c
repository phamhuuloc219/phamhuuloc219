#include <stdio.h>
int a,b,c,d,MS,TS;
void nhapvainps(){
	printf("a=");scanf("%d",&a);
	printf("b=");scanf("%d",&b);
	printf("c=");scanf("%d",&c);
	printf("d=");scanf("%d",&d);
	printf("%d/%d+%d/%d=",a,b,c,d);
}
int ucln(int n1, int n2){
	int UCLN;
	while (n1!=n2){
		if (n1>n2){
			n1=n1-n2;
		}
		else {
			n2=n2-n1;
		}
	}
	UCLN=n1;
	return UCLN;
}
int quydongmau(){
	int MSC;
	MSC=b*d/ucln(b,d);
	return MSC;
}
void tinhtong(){
	MS=quydongmau();
	TS=quydongmau()/b*a+quydongmau()/d*c;
	printf("%d/%d",TS,MS);
}
void toigian(){
	printf("\nphan so sau toi gian la: %d/%d",TS/ucln(TS,MS),MS/ucln(TS,MS));
}
int main()
{
	nhapvainps();
	tinhtong();
	toigian();
	return 0;
}
