#include <stdio.h>

int main()
{
    int x, y;
    int *ptrX = &x;
    int *ptrY = &y;
    *ptrX = 5;
    *ptrY = 10;

    printf("%d %d", x, y);
    return 0;
}