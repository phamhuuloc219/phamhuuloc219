#include <stdio.h>
char n;
int checknumber(char kitu){
	if(kitu>='0'&& kitu<='9'){return 1;
	}
	else {
		return 0;
	}
}
int main()
{
	printf("nhap day cac ki tu, ket thuc la dau #: \n");
	scanf("%c",&n);
	while (n!='#'){
	if (checknumber(n)==1){
		printf("%c",n);
	}
	scanf("%c",&n);}
	return 0;
}
