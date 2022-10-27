#include <stdio.h>

int main()
{
    int fac = 1, n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        fac *= i;
    }
    printf("%d ", fac);
}