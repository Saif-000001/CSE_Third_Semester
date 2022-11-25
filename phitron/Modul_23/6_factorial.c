#include <stdio.h>

int factorial(int n);
int facAno(int a, int b);

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int ans = facAno(a, b);
    printf("%d \n", ans);
    return 0;
}

int factorial(int n)
{
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum *= i;
    }
    return sum;
}

int facAno(int a, int b)
{
    int x = factorial(a);
    int y = factorial(b);

    int ratio = x / y;

    return ratio;
}