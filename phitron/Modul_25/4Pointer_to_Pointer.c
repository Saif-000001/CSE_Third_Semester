#include <stdio.h>

int main()
{
    int a = 5;
    printf("%d\n", a);

    int *p = &a;
    printf("%p\n", p);
    int **qq = &p;
    printf("%p\n", qq);

    **qq = 75;
    printf("%d\n", a);
    return 0;
}