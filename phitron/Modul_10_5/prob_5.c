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
    int flog, count = 0;
    for (int i = 1; i <= n; i++)
    {
        flog = 0;
        for (int j = 2; j <= arr[i] / 2; j++)
        {
            if (arr[i] % j == 0)
            {
                flog = 1;
                break;
            }
        }
        if (flog == 0)
        {
            count++;
            printf("%d ", arr[i]);
        }
    }
    printf("\n%d\n", count);
}