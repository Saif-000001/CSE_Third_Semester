#include <stdio.h>

void n_to_rn(int n);

int main()
{
    int n;
    scanf("%d", &n);
    n_to_rn(n);
    return 0;
}

void n_to_rn(int n)
{
    if (n > 0)
    {
        for (int i = n; i >= -n; i--)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (int i = -n; i >= n; i--)
        {
            printf("%d ", i);
        }
    }
}
