#include <stdio.h>

int main()
{
    int a = 75, *pi;
    double b = 77.44, *pd;

    pi = &a;
    pd = (double *)pi;

    // char c = 'a';

    // a = b;
    // b = a;
    // c = a;
    // a = c;
    printf("%d %lf\n", a, b);
    printf("%p %p \n", pi, pd);

    return 0;
}