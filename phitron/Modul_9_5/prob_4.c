#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d - ", i);
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                continue;
            }
            printf("%d ", j);
        }
        printf("\n");
    }
}