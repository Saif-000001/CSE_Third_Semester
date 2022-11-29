#include <stdio.h>

int recursion(int n);

int main()
{
    int n;
    scanf("%d", &n);
    int ans = recursion(n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ans);
    }
}

int recursion(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return recursion(n - 1);
}