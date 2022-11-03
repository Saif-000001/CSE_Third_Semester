#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    for (i = 0; i < k; i++)
    {
        int x = arr[0];
        for (int j = 0; j < n; j++)
        {

            arr[j] = arr[j + 1];
            arr[n] = x;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}