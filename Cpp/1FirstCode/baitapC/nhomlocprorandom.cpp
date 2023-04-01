#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initRandomArray(int *A, int n, int k) {
    srand(time(NULL));
    int randNum = 0;
    for (int i = 0; i < n; i++) {
        randNum = rand() % k;
        A[i] = randNum;
    }
}

int main() {
    int *A;
    int n = 10; /* S? lu?ng ph?n t? c?a m?ng */
    int k = 100; /* M?i ph?n t? có giá tr? ng?u nhiên n?m trong kho?ng t? 0 d?n k */

    A = new int[n]; // C?p phát b? nh? cho m?ng A

    initRandomArray(A, n, k);

    /* Xu?t m?ng */
    for (int i = 0; i < n; i++) {
        printf("%4d", A[i]);
    }
    printf("\n");

    delete[]A; // Free vùng nh? sau khi s? d?ng
    return 0;
}
