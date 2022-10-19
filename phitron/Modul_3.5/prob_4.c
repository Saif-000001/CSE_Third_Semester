#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n >= 80)
    {
        printf("A+");
    }
    else if (79 >= n && n >= 70)
    {
        printf("A");
    }
    else if (69 >= n && n >= 60)
    {
        printf("A-");
    }
    else if (59 >= n && n >= 50)
    {
        printf("B");
    }
    else if (49 >= n && n >= 40)
    {
        printf("C");
    }
    else if (39 >= n && n >= 32)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
    return 0;
}