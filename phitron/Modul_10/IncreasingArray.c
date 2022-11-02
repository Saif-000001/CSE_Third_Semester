#include <stdio.h>

int main()
{
    long long int n, i;
    scanf("%lld", &n);

    long long int arr[n], moves = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (i = 1; i <= n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            moves += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }
    printf("%lld ", moves);
    return 0;
}