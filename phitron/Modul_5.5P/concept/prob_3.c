#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a = n / 2;
        int b = n;
        if (n % 2 == 1)
        {
            a += 1;
        }

        while (a > 0)
        {
            printf("%d ", a);
            a--;
            if (a == 0)
            {
                break;
            }
            printf("%d ", b);
            b--;
        }

        if (n % 2 == 0)
        {
            printf("%d ", b);
        }
    }
}