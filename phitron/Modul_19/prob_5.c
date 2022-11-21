#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("%d", 1);
        return 0;
    }

    for (i = 1; i <= n; i++)
    {
        printf("%d", i);
    }
    printf("\n");
    i--;

    for (int k = 2; k <= n + 1; k++)
    {
        printf("%d", k);
        // printf("\n");
        for (int x = 0; x < n - 2; x++)
        {
            printf(" ");
        }
        printf("%d", i);
        printf("\n");
    }

    for (int j = 1; j <= n; j++)
    {
        printf("%d", n);
    }
}