#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	FILE *fptr;
	fptr=fopen("D:\\VSbaitapC\\KTLT\\baithuchanh3\\Chuongtrinh_Minhhoa\\ptbac2.txt","rb");
	if(fptr==NULL){
		printf("Khong mo duoc File!!!");
	}
	fscanf(fptr,"%f", &a);
   fscanf(fptr,"%f", &b);
   fscanf(fptr,"%f", &c);
   printf("\nCac so a,b,c lan luot :%f, %f,%f",a,b,c);
   if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh vo nghiem!");
        } else {
            printf("Phuong trinh co mot nghiem: x = %f",-c/b);
        }
    }
    // tinh delta
    float delta = b*b - 4*a*c;
    float x1;
    float x2;
    // tinh nghiem
    if (delta > 0) {
        x1 = ((-b + sqrt(delta)) / (2*a));
        x2 = ((-b - sqrt(delta)) / (2*a));
        printf("\nPhuong trinh co 2 nghiem la: x1 = %f va x2 = %f",x1,x2);
    } else if (delta == 0) {
        x1 = (-b / (2 * a));
        printf("\nPhong trinh co nghiem kep: x1 = x2 = %f", x1);
    } else {
        printf("\nPhuong trinh vo nghiem!");
    }
   if ((fptr = fopen("D:\\VSbaitapC\\KTLT\\baithuchanh3\\ketquaphuongtrinh.txt","wb")) == NULL){
       printf("loi khong co file");
   }
   fprintf(fptr, "%f\n", x1);
   fprintf(fptr, "%f\n", x2);
	fclose(fptr);
}
