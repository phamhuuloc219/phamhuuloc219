#include <stdio.h>  
typedef struct{
	char MSSV[9];
	char HoTen[30];
	float DTB;
}SinhVien;

void DocDSSV(char fname[], SinhVien sv[], int &soSV)
{
	soSV = 0;
	FILE* fp = fopen(fname, "rt"); 
	if(fp == NULL) 
		printf("Khong mo duoc file!");
	else
	{
		while(!feof(fp))
		{
			fscanf(fp, "%[^,], %[^,], %f\n", &sv[soSV].MSSV, &sv[soSV].HoTen, &sv[soSV].DTB );
			soSV ++;			
		}
		fclose(fp);
	}
}

void InDSSV(SinhVien sv[], int n)
{
	for(int i=0; i < n; i++)
		printf("%s\t%s\t%.2f\n", sv[i].MSSV, sv[i].HoTen, sv[i].DTB);
}

void SapXep(SinhVien sv[], int n)
{
	for(int i=0; i < n-1; i++)
		for(int j=i+1; j < n; j++)
			if(sv[i].DTB < sv[j].DTB)
			{
				SinhVien t = sv[i];
				sv[i] = sv[j];
				sv[j] = t;		
			}
}

int main()
{
	SinhVien sv[100];
	int soSV = 0;
	DocDSSV("D:\\VSbaitapC\\KTLT\\baithuchanh3\\dssv.txt", sv, soSV);
	printf("Danh sach sinh vien doc tu file:\n");
	InDSSV(sv, soSV);
	SapXep(sv, soSV);
	printf("\nDanh sach sinh vien da sap xep:\n");
	InDSSV(sv, soSV);	
}
