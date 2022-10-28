#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        printf("The GCD of %d and %d is %d.", a, b, a % b);
    }
    else if (b > a)
    {
        printf("The GCD of %d and %d is %d.", a, b, b % a);
    }
    else
    {
        printf("Equal number!.");
    }
    return 0;
}