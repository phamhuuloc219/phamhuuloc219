#include<stdio.h>
char n;

int so(char number){
    if (number>='0' && number<='9'){
        return 1;
    }else{
        return 0;
    }
}
void inso(){
    printf("nhap chuoi ki tu: ");
    scanf("%c",&n);
    while(n!='#'){
        if(so(n)==1){
            printf("%c",n);
        }
        scanf("%c",&n);
    }
}
void demnguyenam(){
    int na=0;
    int ne=0;
    int ni=0;
    int no=0;
    int nu=0;
    printf("nhap chuoi ki tu: ");
    scanf("%c",&n);
    while(n!='#'){
        if(n=='a'  n=='A'){
            na++;
        }
        if(n=='e'  n=='E'){
            ne++;
        }
        if(n=='i'  n=='I'){
            ni++;
        }
        if(n=='o'  n=='O'){
            no++;
        }
        if(n=='u' || n=='U'){
            nu++;
        }
        scanf("%c",&n);
    }
    printf("\nSo nguyen am a la: %d",na);
    printf("\nSo nguyen am e la: %d",ne);
    printf("\nSo nguyen am i la: %d",ni);
    printf("\nSo nguyen am o la: %d",no);
    printf("\nSo nguyen am u la: %d",nu);
}




void thuongthanhhoa(){
    printf("nhap chuoi ki tu: ");
    scanf("%c",&n);
    while(n!='#'){
        if(n>='a'&& n<='z'){
            printf("%c",(char)n-32);
        }else{
            printf("%c",n);
        }
        scanf("%c",&n);
    }
}
int main(){
    //inso();
    //demnguyenam();
    //thuongthanhhoa();

    return 0;
}
