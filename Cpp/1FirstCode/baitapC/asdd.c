#include <stdio.h>
int ucln(int a, int b)
{
	if(a>b){
		ucln=a-b;
	}
	else{
		ucln=b-a;
	}
}
int main(){
	printf("ucln(%d,%d)=%d",6,9,ucln(6,9));
	return 0;
	
}
