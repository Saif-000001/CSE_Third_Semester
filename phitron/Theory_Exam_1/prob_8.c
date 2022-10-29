#include <stdio.h>

int main()
{
    int a, b, mod;
    scanf("%d%d", &a, &b);
    if (a >= b)
    {
        mod = a % b;
        if (mod > 0)

            printf("The LCM of %d and %d is %d.", a, b, (a * b) / mod);
        else
            printf("The LCM of %d and %d is %d.", a, b, a);
    }
    else
    {
        mod = b % a;
        if (mod > 0)

            printf("The LCM of %d and %d is %d.", a, b, (b * a) / mod);

        else
            printf("The LCM of %d and %d is %d.", a, b, b);
    }

    return 0;
}