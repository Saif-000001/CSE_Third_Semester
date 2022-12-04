#include <stdio.h>

int totalSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] % 2 == 0 && i % 2 == 0 || arr[i] % 2 == 1 && i % 2 == 1)
        {
            sum += arr[i] + i;
        }
    }

    if (sum)
    {
        return sum;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", totalSum(arr, n));
    return 0;
}