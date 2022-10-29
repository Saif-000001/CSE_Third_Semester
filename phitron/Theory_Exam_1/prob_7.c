#include <stdio.h>

int main()
{
    int a, b, mod;
    scanf("%d%d", &a, &b);
    if (a >= b)
    {
        mod = a % b;
        if (mod > 0)

            printf("The GCD of %d and %d is %d.", a, b, mod);
        else
            printf("The GCD of %d and %d is %d.", a, b, b);
    }
    else
    {
        mod = b % a;
        if (mod > 0)

            printf("The GCD of %d and %d is %d.", a, b, mod);
        else
            printf("The GCD of %d and %d is %d.", a, b, a);
    }

    return 0;
}