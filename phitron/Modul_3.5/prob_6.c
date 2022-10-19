#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int sum = x + y;
    if (sum >= 100)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}