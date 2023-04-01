#include <stdio.h>
#include"sinhvien.h"

int main() {
	SV s[100];
	int n;
	NhapDSSV(s,n);
	XuatDSSV(s,n);
	TimKiem(s,n);
	SapXep(s,n);
}
