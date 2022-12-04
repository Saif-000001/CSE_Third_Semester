#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] % 2 == 0 && i % 2 == 0 || arr[i] % 2 == 1 && i % 2 == 1)
        {
            sum += arr[i] + i;
        }
    }
    printf("%d\n", sum);
    return 0;
}