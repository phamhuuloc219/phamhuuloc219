#include <stdio.h>
 
// Hàm doi cho 2 so nguyên
void doi(int &xp, int &yp)
{
    int tam = xp;
    xp = yp;
    yp = tam;
}
 
// Hàm selection sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    // Di chuyen ranh gioi cua mang dã sap xep và chua sap xep
    for (i = 0; i < n-1; i++)
    {
    // Tìm phan tu nho nhat trong mang chua sap xep
    min_idx = i;
    for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
        min_idx = j;
 
    // Ðoi cho phan tu nho nhat voi phan tu dau tiên
        doi(arr[min_idx], arr[i]);
    }
}
 
/* Hàm xuat mang */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
 void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
 
// Hàm sap xep bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool haveSwap = false;
    for (i = 0; i < n-1; i++){
    // i ph?n t? cu?i cùng dã du?c s?p x?p
        haveSwap = false;
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                haveSwap = true; // Ki?m tra l?n l?p này có swap không
            }
        }
        // N?u không có swap nào du?c th?c hi?n => m?ng dã s?p x?p. Không c?n l?p thêm
        if(haveSwap == false){
            break;
        }
    }
}
void xuatmang(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{
    int arr[] = {64, 25,0,2,200, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Selection Sort: \n");
    printArray(arr, n);
    printf("------------------------------------");
    bubbleSort(arr, n);
    printf("\nBubble Sort: \n");
    xuatmang(arr, n);
    return 0;
}
