#include <stdio.h>
int i,n,s;
int main()
{
	printf("bang cuu chuong ");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		s=i*n;
		printf("%d x %d = %d\n",n,i,s);
	}

	return 0;
}
