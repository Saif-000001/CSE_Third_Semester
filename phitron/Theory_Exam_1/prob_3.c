#include <stdio.h>

int main()
{
    long long int n, sum = 0;
    scanf("%lld", &n);
    while (n != 0)
    {
        int lastNumber = n % 10;
        sum++;
        n /= 10;
    }
    printf("%lld digits", sum);
    return 0;
}