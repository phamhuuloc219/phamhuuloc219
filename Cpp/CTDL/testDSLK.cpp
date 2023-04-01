#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct sinhvien {
    int masv;
    char tensv[20];
    char lop[20];
    float dtk;
    char hk[15];
};
typedef struct sinhvien SV;
struct node{
    SV data;
    node * next;
};
typedef struct node NODE;
struct list{
    NODE *pHead;
    NODE *pTail;
};
typedef struct list LIST;
void KhoiTao(LIST &ds){
    ds.pHead = NULL;
    ds.pTail = NULL;
}
int KiemTraRong(LIST ds){
    if (ds.pHead == NULL){
        return 1;
    }
    return 0;
}
NODE* TaoNode(SV x) {
    NODE *p;
    p = new NODE;
    if (p==NULL) {
        printf ("KHONG DU BO NHO");
        return NULL;
    }
    p->data=x;
    p->next=NULL;
    return p;
}
void ChenCuoi (LIST &ds, NODE *p){
    if (ds.pHead==NULL) {
        ds.pHead=p;
        ds.pTail=p;
    }
    else {
        ds.pTail->next=p;
        ds.pTail=p;
    }
}
void Nhap(LIST &ds, int n){
    printf("NHAP THONG TIN SINH VIEN\n");
    for(int i = 0; i < n; i++){
        SV x;
        printf ("Nhap ma sinh vien : ");fflush(stdin);
        scanf("%d",&x.masv);
        printf ("Nhap ten sinh vien : ");fflush(stdin);
        gets(x.tensv);
        printf ("Nhap lop : ");fflush(stdin);
        gets(x.lop);
        printf ("Nhap diem tong ket : ");fflush(stdin);
        scanf("%f",&x.dtk);
        printf ("Nhap hanh kiem : ");fflush(stdin);
        gets(x.hk);
        printf ("\n \n");
        NODE *p = new NODE;
        p = TaoNode(x);
        ChenCuoi(ds,p);
    }
}
void Xuat(LIST ds){
    for(NODE *p = ds.pHead; p!= NULL; p=p->next){
        printf("%d\t %s\t %s\t %f\t %s\n", p->data.masv, p->data.tensv, p->data.lop, p->data.dtk, p->data.hk);
    }
}
void SVD13CNPM(LIST ds){
    for(NODE *p = ds.pHead; p!= NULL; p=p->next){
        if(strcmp(p->data.lop, "D13CNPM")==0){
            printf("%d\t %s\t %s\t %f\t %s\n", p->data.masv, p->data.tensv, p->data.lop, p->data.dtk, p->data.hk);
        }
    }
}
void SapXep(LIST &ds){
    NODE *p, *q;
    for(p = ds.pHead; p != ds.pTail; p=p->next){
        for(q = p->next; q != NULL; q = q->next){
            if(p->data.masv > q->data.masv){
                SV x = p->data;
                p->data = q->data;
                q->data = x; 
            }
        }
    }
    Xuat(ds);
}
void XoaCuoi(LIST &ds)
{
    for(NODE *k = ds.pHead; k != NULL; k = k ->next)
    {
        if(k->next == ds.pTail)
        {
            delete ds.pTail;
            k->next = NULL;
            ds.pTail = k;
        }
    }
    Xuat(ds);
}
int main(){
    LIST ds;
    int n;
    printf("NHAP N: ");
    scanf("%d",&n);
    KhoiTao(ds);
    Nhap(ds,n);
    printf("\nDANH SACH SINH VIEN\n");
    Xuat(ds);
    printf("\nDANH SACH SINH VIEN D13CNPM\n");
    SVD13CNPM(ds);
    printf("\nDANH SACH SINH VIEN SAP XEP THEO MA\n");
    SapXep(ds);
    printf("\nDANH SACH SINH VIEN DA XOA PHAN TU CUOI\n");
    XoaCuoi(ds);
}
