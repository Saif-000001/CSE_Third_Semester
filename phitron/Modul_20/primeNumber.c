#include <stdio.h>

int is_Prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    if (is_Prime(n) == 1)
    {
        printf("Prime number \n");
    }
    else
    {
        printf("Composite number \n");
    }

    // int is_Prime = 1;
    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         is_Prime = 0;
    //     }
    // }

    // if (is_Prime == 1)
    // {
    //     printf("Prime number\n");
    // }
    // else
    // {
    //     printf("Composite number\n");
    // }

    return 0;
}