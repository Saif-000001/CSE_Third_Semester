// sum = (n(n+1))/2
#include <stdio.h>

int numberRecursion(int n)
{
    if (n > 0)
        return n + numberRecursion(n - 1);
    else
        return n;
}

int main()
{
    int n;
    scanf("%d", &n);
    int ans = numberRecursion(n);
    printf("%d ", ans);
    return 0;
}