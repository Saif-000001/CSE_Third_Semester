#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int sum = 0;
        int div = n / 4 - 3;
        while (n != sum)
        {
            if (div % 2 == 0)
            {
                printf("%d ", div);
                sum += div;
            }
            div++;
        }
        printf("\n");
    }
}