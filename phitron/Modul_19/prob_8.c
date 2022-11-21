#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], max = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    };

    for (int i = 0; i < n; i++)
    {

        if (arr[i] > max && arr[i] % 2 == 0)
            max = arr[i];

        if (n > 1)
        {
            for (int j = i + 1; j < n; j++)
            {
                int t = (arr[i] + arr[j]);
                if (t % 2 == 0 && max < t)
                {
                    max = t;
                }
            }
        }
    }

    printf("%d", max);
}