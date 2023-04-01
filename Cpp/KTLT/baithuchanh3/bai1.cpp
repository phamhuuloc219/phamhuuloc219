#include<stdio.h>
void ReadTextFile(char fname[]){
	FILE *fp;
	fp=fopen(fname,"rt");
	if(fp==NULL){
		printf("Khong mo duoc file %s.",fname);
	}
	else{
		while(!feof(fp)){
			printf("%c",fgetc(fp));
		}
	}
}
int main(){
	char fname[]="D:\\VSbaitapC\\KTLT\\baithuchanh3\\Chuongtrinh_Minhhoa\\Tiengthu_LuuTrongLu.txt";
	ReadTextFile(fname);
}
