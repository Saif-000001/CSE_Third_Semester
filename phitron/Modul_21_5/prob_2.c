#include <stdio.h>

void pattern(int n);
int main()
{
    int n;
    scanf("%d", &n);
    pattern(n);
    return 0;
}

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j > 1; j--)
        {
            printf(" ");
        }
        for (int j = i; j <= n * 2 - i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}