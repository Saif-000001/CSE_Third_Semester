#include <stdio.h>

int main()
{
    long long int n, count = 0;
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            count++;
        }
    }
    printf("%lld\n", count);
}