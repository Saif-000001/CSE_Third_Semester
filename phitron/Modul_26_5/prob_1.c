#include <stdio.h>

int main()
{
    int a, b;
    int *x, *y;
    x = &a;
    y = &b;
    *x = 13;
    *y = 2;

    float avr = (a + b) / 2.0;
    printf("%.3f\n", avr);
    return 0;
}