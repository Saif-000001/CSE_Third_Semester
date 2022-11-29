#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 5, b = 7;
    printf("Before swapping = %d %d\n", a, b);

    swap(&a, &b);
    printf("After swapping = %d %d\n", a, b);
}