#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n % 3 == 0)
    {
        int div = n / 3;
        printf("%d", div);
    }
    else
    {
        printf("-1");
    }
}