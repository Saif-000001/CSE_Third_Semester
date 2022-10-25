#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         printf("%d ", i);
    //     }
    // }

    int i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}