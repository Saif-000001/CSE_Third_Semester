#include <stdio.h>

void recursion(int n);

int main()
{
    int n;
    scanf("%d", &n);

    recursion(n);
}

void recursion(int n)
{
    if (n == 1)
    {
        printf("%d ", n);
    }
    else
    {
        printf("%d ", n);
        recursion(n - 1);
    }
}