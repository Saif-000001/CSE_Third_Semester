#include <stdio.h>

int divideThree(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 3 == 0)
        {
            count++;
        }
    }
    return count;
}

int divideFive(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 5 == 0 && arr[i] % 3 != 0)
        {
            count++;
        }
    }
    return count;
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

    int ans = divideFive(arr, n) + divideThree(arr, n);
    if (ans)
        printf("%d\n", ans);
    else
        printf("-1\n");
    return 0;
}