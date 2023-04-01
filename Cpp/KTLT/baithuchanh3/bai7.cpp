#include <string.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
   char sentence[1000];
   FILE *fptr;
 
   fptr = fopen("D:\\VSbaitapC\\KTLT\\baithuchanh3\\program.txt", "w+");
   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }
   
   printf("Nhap chuoi ki tu:\n");
   gets(sentence);
 
   fprintf(fptr,"%s", sentence);
   fclose(fptr);
 
   return 0;
}
