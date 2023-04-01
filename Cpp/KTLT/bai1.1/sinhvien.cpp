#include"sinhvien.h"
#include"string.h"
#include<stdio.h>
#include<unistd.h>
// cai dat ham nhap
void NhapSV(SV &s){
	fflush(stdin);
	printf("-----------------------------\n");sleep(0.5);
	printf("nhap MSSV:");
	gets(s.MSSV);
	printf("nhap ho ten sv:");
	gets(s.HoTen);
	printf("nhap DTB:");
	scanf("%f",&s.DTB);
}
// cai dat ham xuat
void XuatSV(SV s){
	
	
	printf("%s \t %s \t %5.2f\n",s.MSSV,s.HoTen,s.DTB);
}
// cai dat ham nhap danh sach sinh vien
void NhapDSSV(SV s[],int &n){
	do{
		printf("nhap so luong sinh vien:");
		scanf("%d",&n);
	}while(n<0||n>100);
	for(int i=0;i<n;i++){
		NhapSV(s[i]);
	}
}
// cai dat ham xuat danh sach sinh vien
void XuatDSSV(SV s[],int &n){
	printf("-----------------------------\n");sleep(0.5);
	printf("MSSSV \t Ho ten \t  DTB\n");
	for(int i=0;i<n;i++){
		XuatSV(s[i]);
	}
}
// cai dat ham tim kiem sinh vien
void TimKiem(SV s[], int &n){
	char x[9];
	printf("-----------------------------\n");sleep(0.5);
	printf("nhap ma so sinh vien can tim:");
	scanf("%s",&x);
	for(int i=0;i<n;i++){
	if(strcmp(s[i].MSSV,x)==0){
		XuatSV(s[i]);
		}
   }
}
// cai dat ham sap xep DTB sinh vien
void SapXep(SV s[], int &n){
	SV temp;
	printf("-----------------------------\n");sleep(0.5);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(s[i].DTB<s[j].DTB){
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	
	printf("danh sach sau khi sap xep DTB la:\n");
		for(int i=0;i<n;i++){
		XuatSV(s[i]);
	}
}
