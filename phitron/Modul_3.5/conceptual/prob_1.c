#include <stdio.h>
#include <minmax.h>

int main()
{
    int a, b, c, d, ans;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (max(a, b) > min(c, d) && max(c, d) > min(a, b))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}