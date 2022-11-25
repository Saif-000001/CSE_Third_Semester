#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d%d", &n, &x);
    int arr[n], index = 0;
    int i;
    for (i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            arr[index] = i;
            index++;
        }
    }

    for (i = 0; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            arr[index] = i;
            index++;
        }
    }

    for (i = 1; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("\nThe %dth element in this sequence is %d", x, arr[x]);
    return 0;
}