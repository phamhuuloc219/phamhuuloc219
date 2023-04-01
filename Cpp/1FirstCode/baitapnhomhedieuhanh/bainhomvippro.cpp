#include <stdio.h>
#include<stdlib.h>

// ham doi cho 2 so nguyen
void doi(int &xp, int &yp)
{
    int tam = xp;
    xp = yp;
    yp = tam;
}
 
// ham selection sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    // di chuyen ranh gioi cua mang da sap xep va chua sap xep
    for (i = 0; i < n-1; i++)
    {
    // tim phan tu nho nhat trong mang chua sap xep
    min_idx = i;
    for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
        min_idx = j;
 
    // doi cho phan tu nho nhat voi phan tu dau tiên
        doi(arr[min_idx], arr[i]);
    }
}
 
/* ham xuat mang */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%3d ", arr[i]);
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
    // i phan tu cuoi cung da duoc sap xep
        haveSwap = false;
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                haveSwap = true; // Kiem tra lan lap nay co swap khong
            }
        }
        // neu khong co swap nao duoc thuc hien => mang da sap xep. Khong can lap them
        if(haveSwap == false){
            break;
        }
    }
}
void xuatmang(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%3d ", arr[i]);
    printf("\n");
}
 
int main()
{
	// random mang
    int sz;
	printf("Nhap so luong phan tu phat sinh: ");
	scanf("%d",&sz);
	int arr[sz];
	int i;
	for(i=0;i<sz;i++){
		arr[i]=rand()%100;
	}
	printf("\nCac phan tu cua mang la:");
	for(i=0;i<sz;i++){
		printf("%3d",arr[i]);
	}
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("\n");
    // ham selection sort
    selectionSort(arr, n);
    printf("\nCac phan tu sau khi sao xep Selection Sort: \n");
    printArray(arr, n);
    // ham bubble sort
    bubbleSort(arr, n);
    printf("\nCac phan tu sau khi sao xep Bubble Sort: \n");
    xuatmang(arr, n);
    return 0;
}
