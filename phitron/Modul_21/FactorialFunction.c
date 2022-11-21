#include <stdio.h>

int factorial(int n);

int main()
{
    int n, r;
    scanf("%d%d", &n, &r);
    int perm, comb;

    perm = factorial(n) / factorial(n - r);
    comb = factorial(n) / (factorial(n - r) * factorial(r));

    printf("nPr = %d\n", perm);
    printf("nCr = %d\n", comb);
    printf("Factorial = %d\n", factorial(n));
}

int factorial(int n)
{
    int fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac *= i;
    }
    return fac;
}