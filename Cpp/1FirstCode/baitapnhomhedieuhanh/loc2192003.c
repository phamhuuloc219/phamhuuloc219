#include<stdio.h>
#include<string.h>
void nhapchuoi(char s[50]){
	printf("nhap chuoi:");
	gets(s);
	printf("chuoi vua nhap la:%s",s);
}
void dodaichuoi(char s[50]){
	int len=strlen(s);
	printf("\ndo dai chuoi la: %d",len);
}
int dem(char s[50]){
	int i,count=0;
	for(i=0;i<strlen(s);i++){
		if(s[i]==' '){
			count++;
		}
	}
	return count+1;
}
int main(){
	char s[50];
	nhapchuoi(s);
	dodaichuoi(s);
	printf("\nso tu trong chuoi la:%d",dem(s));
}
