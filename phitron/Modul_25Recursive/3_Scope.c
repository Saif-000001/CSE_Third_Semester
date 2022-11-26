#include <stdio.h>

int g = 7;

void printfFunc()
{

    int a, b, g = 13;
    scanf("%d%d", &a, &b);
    int sum = a + b;
    printf("%d\n", sum);
    printf("Printing in add function %d\n", g);
    g = g + 2;
    printf("Printing in add function %d\n", g);
}

int main()
{
    int g = 21;
    printfFunc();
    printf("Printing in main function %d\n", g);
    {
        extern int g;
        printf("Printing global g %d\n", g);
    }

    return 0;
}