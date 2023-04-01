#include <stdio.h>
 
// Hàm d?i ch? 2 s? nguyên
void swap(int &xp, int &yp)
{
    int temp = xp;
    xp = yp;
    yp = temp;
}
 
// Hàm selection sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    // Di chuy?n ranh gi?i c?a m?ng dã s?p x?p và chua s?p x?p
    for (i = 0; i < n-1; i++)
    {
    // Tìm ph?n t? nh? nh?t trong m?ng chua s?p x?p
    min_idx = i;
    for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
        min_idx = j;
 
    // Ð?i ch? ph?n t? nh? nh?t v?i ph?n t? d?u tiên
        swap(arr[min_idx], arr[i]);
    }
}
 
/* Hàm xu?t m?ng */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
 
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
