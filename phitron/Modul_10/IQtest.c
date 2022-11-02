#include <stdio.h>

int main()
{
    int n, arr[105], ans;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int en = 0, oc = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            en++;
        }
        else
        {
            oc++;
        }
    }

    if (en == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                ans = i;
            }
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] % 2 == 1)
            {
                ans = i;
            }
        }
    }
    printf("%d", ans);
    return 0;
}