#include <stdio.h>

int main()
{
    long long int n, x, i;
    scanf("%lld", &n);
    int arr[n];

    for (i = 1; i < n; i++)
    {
        scanf("%lld", &x);
        arr[x] = 1;
    }

    for (i = 1; i <= n; i++)
    {
        if (arr[i] == 1)
        {
            // printf("%d ", i);
            continue;
        }
        // printf("%d -> %d\n", i, arr[i]);
        printf("%lld\n", i);
    }
}