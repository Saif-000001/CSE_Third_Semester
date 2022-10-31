#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int j = 0; j < t; j++)
    {
        int n, maxN = 101;
        scanf("%d", &n);

        int input[n + 1];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &input[i]);
        }

        int arr[maxN];
        for (int i = 0; i < maxN; i++)
        {
            arr[i] = 0;
        }

        for (int i = 1; i <= n; i++)
        {
            arr[input[i]] += 1;
        }

        int index;
        for (int i = 1; i <= n; i++)
        {
            if (arr[input[i]] == 1)
            {
                index = i;
                break;
            }
        }
        printf("%d\n", index);
    }
}