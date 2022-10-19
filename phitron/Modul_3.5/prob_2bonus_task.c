#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a != b && a != c || b == c)
    {
        printf("B and C both are bigger");
    }
    else if (b != a && b != c || a == c)
    {
        printf("A and C both are bigger");
    }
    else if (c != a && c != b || a == b)
    {
        printf("A and B both are bigger");
    }
    else
    {
        printf("They are equal");
    }
}