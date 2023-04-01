#include <stdio.h>
char nn;
void nhap(){
	printf("nhap ki tu:");
	scanf("%c",&nn);
}
void hienthi(char kitu){
switch (kitu)
	{
		case 'e':
		case 'E':{
			printf(" Hello! ");
			break;
		}
		case 'f':
		case 'F':{
			printf(" Bonjour! ");
			break;
		}
		case 'i':
		case 'I':{
			printf(" Xin chao may` !");
			break;
		}
		case 'v':
		case 'V':{
			printf(" Tam biet may` !");
			break;
		}
		default:{
		printf("Dark Dark Bruh Bruh Lmao ");
		}
	}
}
int main()
{
 	nhap();
	hienthi(nn);
	return 0;
}
