#include <stdio.h>

int main()
{
    int a = 5;
    int *p;
    int *q;
    p = &a;
    q = p;
    *q = 72;
    printf("%d", a);
    return 0;
}