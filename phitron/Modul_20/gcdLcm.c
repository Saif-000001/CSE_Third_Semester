#include <stdio.h>

int gcd(int m, int n)
{
    int l, s;
    if (m > n)
    {
        l = m;
        s = n;
    }
    else
    {
        l = n;
        s = m;
    }
    for (int i = l; i >= 1; i--)
    {
        if (l % i == 0 && s % i == 0)
            return i;
    }
}
int lcm(int m, int n)
{

    return (m * n) / gcd(m, n);
    // int l, s;
    // if (m > n)
    // {
    //     l = m;
    //     s = n;
    // }
    // else
    // {
    //     l = n;
    //     s = m;
    // }
    // for (int i = l;; i++)
    // {
    //     if (i % l == 0 && i % s == 0)
    //         return i;
    // }
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int ans = gcd(a, b);
    int ans1 = lcm(a, b);

    printf("GCD is %d\n", ans);
    printf("LCM is %d\n", ans1);

    // for (int i = 1; i <= a; i++)
    // {
    //     if (a % i == 0 && b % i == 0)
    //     {
    //         gcd = i;
    //     }
    // }

    // for (int i = a; i >= 1; i--)
    // {
    //     if (a % i == 0 && b % i == 0)
    //         gcd = i;
    //     break;
    // }
    // printf("The gcd is %d\n", gcd);
}