#include <stdio.h>

int myGcd(int x, int y)
{
    for (int i = x; i >= 1; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            return i;
        }
    }
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    int ans = myGcd(x, y);
    printf("This is myGCD %d ", ans);
    return 0;
}