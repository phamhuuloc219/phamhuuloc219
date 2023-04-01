#include <iostream> 
#include <cstring> 
using namespace std;

int recLen(char* str)   
{
    if (*str == '\0')
        return 0;
    else
        return 1+ recLen(str + 1);
}
 
int main()
{
    char str[100];
    cout<<"Xin moi nhap chuoi :";
	fgets(str,sizeof(str)+1,stdin); 
    cout << "Chieu dai chuoi:" <<recLen(str)-1;
    return 0;
}
