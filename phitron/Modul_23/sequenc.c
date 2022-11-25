#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[100];
    int arr2[100];
    int sum[100];
    int sum1, sum2, i;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = i;

            printf("%d ", arr[i]);
        }
    }
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            arr[i] = i;
            printf("%d ", arr[i]);
        }
    }
    // sum[i] = arr[i];

    printf("\nThe 9th element in this sequence is %d", arr[9]);
    return 0;
}