#include <stdio.h>

int main()
{
    int n, h;
    scanf("%d %d", &n, &h);
    int f, s = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &f);
        if (f > h)

            s += 2;

        else

            s++;
    }

    printf("%d", s);
    return 0;
}