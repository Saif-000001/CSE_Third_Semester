#include <stdio.h>

int main()
{
    long long int n, k, c, add;

    scanf("%lld %lld", &n, &k);
    if (n % 2 == 0)
    {
        c = n / 2;
    }
    else
    {
        c = (n + 1) / 2;
    }

    if (k <= c)
    {
        add = 2 * k - 1;
        printf("%lld ", add);
    }
    else
    {
        add = (k - c) * 2;
        printf("%lld ", add);
    }
}