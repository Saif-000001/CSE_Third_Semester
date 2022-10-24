#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    int i = 1;
    while (n > 1)
    {
        printf("%lld ", n);
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = n * 3 + 1;
        }
        i++;
    }
    printf("%lld", n);
    return 0;
}