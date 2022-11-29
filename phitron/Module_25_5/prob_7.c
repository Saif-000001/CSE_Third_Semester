#include <stdio.h>

void threeDigit(int n);

int main()
{
    int n;
    scanf("%d", &n);

    threeDigit(n);
    return 0;
}

void threeDigit(int n)
{
    while (n--)
    {
        int k;
        scanf("%d", &k);
        for (int i = 1;; i++)
        {
            if (i % 3 == 0 || i % 10 == 3)
            {
                continue;
            }

            else
            {
                k--;
                if (k == 0)
                {
                    printf("%d\n", i);
                    break;
                }
            }
        }
    }
}