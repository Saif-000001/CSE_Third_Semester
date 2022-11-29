#include <stdio.h>
int recursion(int n);
int main()
{
    int n;
    scanf("%d", &n);
    int ans = recursion(n);
    printf("%d ", ans);
}

int recursion(int n)
{

    if (n != 0)
    {
        return n + recursion(n - 1);
    }
    else
    {
        return n;
    }
}