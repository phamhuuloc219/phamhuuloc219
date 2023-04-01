#include"mylib.h"
void NhapMang(int a[], int &n)
{
	do{
		printf("Nhap so phan tu:");
		scanf("%d",&n);
	}while(!(n > 0 && n <= MAX));
	for(int i = 0; i < n; i++)
		{
			printf("a[%d]=", i);
			scanf("%d", &a[i]);
		}
}

void XuatMang(int a[], int n)
{
	for(int i=0; i < n; i++)
		printf("%d  ", a[i]);
}

void NhapMangTuFile(char fname[], int a[], int &n)
{
	FILE *fp = fopen(fname, "rt"); 
	if(fp == NULL)
		printf("Khong mo duoc file!");
	else
	{
		fscanf(fp, "%d\n", &n);
		for(int i=0; i < n; i++)
			fscanf(fp, "%d", &a[i]);
		fclose(fp);
	}
}

void SapXepTangDan(int a[], int n)
{
	for(int i=0; i < n - 1; i++)
		for(int j=i+1; j < n; j++)
			if(a[i] > a[j])
				{
					int t = a[i]; a[i] = a[j]; a[j] = t;
				}
}

void GhiMangVaoFile(char fname[], int a[], int n)
{
	FILE *fp = fopen(fname,"wt");
	if(fp == NULL)
		printf("Khong mo duoc file.");
	else
	{
		fprintf(fp, "%d\n", n);
		for(int i=0; i < n; i++)
			fprintf(fp, "%d  ", a[i]);
		fclose(fp);
	}
}


