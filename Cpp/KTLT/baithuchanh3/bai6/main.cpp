#include <stdio.h>
#include"mylib.h"
int main() {
	int a[MAX];
	int n;
	NhapMangTuFile("D:\\VSbaitapC\\KTLT\\baithuchanh3\\bai6\\mang1chieu.txt",a,n);
	printf("\nMang vua nhap:\n");
	XuatMang(a,n);
	SapXepTangDan(a,n);
	printf("\nMang sap xep tang dan:\n");
	XuatMang(a,n);
	GhiMangVaoFile("D:\\VSbaitapC\\KTLT\\baithuchanh3\\bai6\\new.txt",a,n);
}
