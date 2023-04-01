#include <stdio.h>
int main()
{
    printf("S(n) = 1 + 1/(1+2) + 1/(1+2+3) +...+ 1/(1+2+3+...+n)\n");
    int i, n;
    unsigned int p = 0;
    float s = 0.0;
    do
    {
        printf("n = ");
        scanf("%d", &n);
    }while(n <= 0);
     
    for(i = 1; i <= n; i++)
    {
        p += i;
        s += 1.0/p;
    }
    printf("\nS(%d) = %.2f", n, s);
}
