#include <stdio.h>
#include <stdlib.h>
 
long filesize(FILE* fp)
{
    fseek(fp, 0, SEEK_END); 
    return ftell(fp); 
}
 
int main(void)
{
    FILE* fp; 
    fp = fopen("D:\\VSbaitapC\\KTLT\\baithuchanh3\\Chuongtrinh_Minhhoa\\Tiengthu_LuuTrongLu.txt","rb"); 
    if(!fp) {
        printf("Khong mo duoc file"); 
    }
    printf("File co kich thuoc la: %d bytes \n", filesize(fp));
    return 0;
}

