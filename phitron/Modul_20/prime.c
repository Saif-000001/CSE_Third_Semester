#include <stdio.h>

int is_primeNumber(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    int prim = is_primeNumber(n);

    if (prim == 1)
    {
        printf("%d prime number ", n);
    }
    else
    {
        printf("%d not prime number ", n);
    }

    return 0;
}