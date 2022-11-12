#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    printf("%d ", sum);
}