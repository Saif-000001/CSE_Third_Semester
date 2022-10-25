#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    for (int i = 1; i >= n; i--)
    {
        printf("%d ", i);
    }
    // int i = 1;
    // while (i <= n)
    // {
    //     printf("%d ", i);
    //     i++;
    // }

    // while (i >= n)
    // {
    //     printf("%d ", i);
    //     i--;
    // }
    return 0;
}