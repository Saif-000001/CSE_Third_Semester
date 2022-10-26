#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    while (i != n)
    {
        printf("%d ", i);
        if (n < 0)
        {
            i--;
        }
        else
        {
            i++;
        }
    }
    printf("%d ", i);
    return 0;
}