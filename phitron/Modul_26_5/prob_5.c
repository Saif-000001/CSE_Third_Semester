#include <stdio.h>

int sumDigit(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 10 == 0)
        {
            sum += arr[i];
        }
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int ans = sumDigit(arr, n);
    printf("%d ", ans);
    return 0;
}