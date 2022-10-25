#include <stdio.h>

int main()
{
    int i = 1, n, k;
    scanf("%d %D", &n, &k);
    while (i <= k)
    {
        if (n % 10 != 0)
        {
            n--;
        }
        else
        {
            n /= 10;
        }
        i++;
    }
    printf("%d ", n);
}