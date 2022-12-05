#include <stdio.h>

void func(int x, int y, int *p, int *q)
{
    // if (x > y)
    // {
    //     *p = x;
    //     *q = y;
    // }
    // else
    // {
    //     *p = y;
    //     *q = x;
    // }

    *p = x > y ? x : y;
    *q = x < y ? x : y;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int sm, lg;
    func(a, b, &sm, &lg);
    printf("%d %d\n", sm, lg);
}