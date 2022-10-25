#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);

    for (int i = 1; i <= n; i++)
    {
        if (i % m == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}