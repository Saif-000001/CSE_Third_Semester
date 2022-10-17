#include <stdio.h>

int main()
{
    int r;
    printf("Enter the number of radius : ");
    scanf("%d", &r);

    float circle = 3.1416 * r * r;
    printf("Circle = %f", circle);
    return 0;
}