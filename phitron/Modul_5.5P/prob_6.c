#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = n; i <= m; i++)
    {
        printf("%d ", i);
    }

    for (int i = m; i <= n; i++)
    {
        printf("%d ", i);
    }
}