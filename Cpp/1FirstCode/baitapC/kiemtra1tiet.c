//de 2
#include<stdio.h>
#include<string.h>
void nhapchuoi(){
	char s[100];
	printf("nhap chuoi:");
	gets(s);

}
void chuanhoa(){
	char s[100];
	while( s[0] == ' ' ) strcpy(&s[0], &s[1]);
	while( s[strlen(s)-1 ] == ' ') s[strlen(s)-1 ] = '\0';
	int i;
		for(i = 0; i < strlen(s); i++)
			if(s[i] == ' ' && s[i+1] == ' '){
				strcpy(&s[i], &s[i+1]);
				i--;	
	}
}void xuat(){
	char s[100];
	printf("chuoi vua nhap la:%s",s);
}
int main(){
	nhapchuoi();
	chuanhoa();
	xuat();
}
