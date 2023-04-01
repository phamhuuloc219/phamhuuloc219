#include<stdio.h>
 
void sapxep(int a[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
}
int main()
{
    int a[100], b[100], c[200];
    int i, j, k = 0, n , m;
   
    printf("\nNhap so phan tu cua mang 1 (< 100): ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Nhap phan tu a[%d]: \n", i);
        scanf("%d", &a[i]);
    }
    printf("\nNhap so phan tu cua mang 2 (< 100): ");
    scanf("%d", &m);
    for(i = 0; i < m; i++)
    {
        printf("Nhap phan tu b[%d]: \n", i);
        scanf("%d", &b[i]);
    }
    for(i = 0; i < n; i++)
    {
        c[k] = a[i];
        k++;
    }
    k = n;
    for(j = 0; j < m; j++)
    {
        c[k] = b[j];
        k++;
    }
    sapxep(c,k);
     printf("\nMang tron la: \n");
    for(i = 0; i < k; i++)
    {
        printf("\t %d ", c[i]);
    }

    return 0;
}
