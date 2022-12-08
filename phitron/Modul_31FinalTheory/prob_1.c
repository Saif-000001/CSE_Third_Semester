#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    a > b ? printf("large number a : %d\n", a) : printf("large number b : %d\n", b);

    return 0;
}