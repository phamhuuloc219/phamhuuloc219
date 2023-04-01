typedef struct SV{
	char MSSV[9];
	char HoTen[50];
	float DTB;
};
// khai bao khuon mau ham nhap, xuat
void NhapSV(SV &s);
void XuatSV(SV s);
// khai bao khuon mau ham nhap dssv
void NhapDSSV(SV s[],int &n);
// khai bao khuon mau ham xuat dssv
void XuatDSSV(SV s[],int &n);
// khai bao khuon ham tim kiem sv
void TimKiem(SV s[], int &n);
// khai bao khuon ham sap xep DTB SV
void SapXep(SV s[],int &n);
