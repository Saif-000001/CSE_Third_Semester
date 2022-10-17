#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int add = x + y;
    int sub = x - y;
    int mult = x * y;

    printf("%d %d %d", add, sub, mult);
    return 0;
}