// #include <stdio.h>

// int main()
// {
//     int a, b, mod;
//     scanf("%d%d", &a, &b);
//     if (a >= b)
//     {
//         mod = a % b;
//         if (mod > 0)

//             printf("The GCD of %d and %d is %d.", a, b, mod);
//         else
//             printf("The GCD of %d and %d is %d.", a, b, b);
//     }
//     else
//     {
//         mod = b % a;
//         if (mod > 0)

//             printf("The GCD of %d and %d is %d.", a, b, mod);
//         else
//             printf("The GCD of %d and %d is %d.", a, b, a);
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int num1 = n1;
    int num2 = n2;

    while (n1 != n2)
    {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("The GCD of %d and %d is %d.", num1, num2, n1);
    return 0;
}
