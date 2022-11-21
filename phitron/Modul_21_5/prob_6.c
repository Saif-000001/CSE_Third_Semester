#include <stdio.h>

void divisor(int n);
int main()
{
    int n;
    scanf("%d", &n);
    divisor(n);
    return 0;
}

void divisor(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
}