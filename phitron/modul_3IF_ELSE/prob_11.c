#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int root = b * b - 4 * a * c;

    if (root == 0)
    {
        printf("root are equal = %d", root);
    }
    else if (root < 0)
    {
        printf("root are imaginary = %d", root);
    }
    else
    {
        printf("root are real = %d", root);
    }
    return 0;
}