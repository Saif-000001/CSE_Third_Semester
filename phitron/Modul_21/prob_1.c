#include <stdio.h>

// function prototype
int max_three_value(int x, int y, int z);

int main()
{
    int a, b, c, i, m;
    for (i = 0; i < 5; i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        m = max_three_value(a, b, c);
        printf("The max value %d", m);
    }
    return 0;
}

int max_three_value(int x, int y, int z)
{
    if (x > y && x > z)
        return x;
    else if (y > x && y > z)
        return y;
    else
        return z;
}