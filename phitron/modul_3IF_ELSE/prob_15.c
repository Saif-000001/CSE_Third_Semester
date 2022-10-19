#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int sum = a + b + c;
    if (sum == 180)
    {
        printf("The triangle is valid.");
    }
    else
    {
        printf("The triangle is not valid.");
    }

    return 0;
}