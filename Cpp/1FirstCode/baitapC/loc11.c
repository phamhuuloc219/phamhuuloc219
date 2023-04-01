#include <stdio.h>
void  demnguyenham(){
	char n;
	int na=0;
	int ne=0;
	int ni=0;
	int no=0;
	int nu=0;
	printf("nhap day cac ki tu, ket thuc la dau #: \n");
	scanf("%c",&n);
	while (n!="#"){
		if(n=='a'||n=='A'){
			na++;
		}
		if(n=='e'||n=='E'){
			ne++;
		}
		if(n=='i'||n=='I'){
			ni++;
		}
		if(n=='o'||n=='O'){
			no++;
		}
		if(n=='u'||n=='U'){
			nu++;
		}
		scanf("%c",&n);
	}
	printf("so nguyen am a la: %d",na);
	printf("so nguyen am e la: %d",ne);
	printf("so nguyen am i la: %d",ni);
	printf("so nguyen am o la: %d",no);
	printf("so nguyen am u la: %d",nu);
}
int main()
{
	demnguyenham();
	return 0;
}
