#include <stdio.h>

int main()
{
    // int sum = 0;
    // printf("The first 10 natural number is : \n");
    // for (int i = 1; i <= 10; i++)
    // {
    //     sum += i;
    //     printf("%d ", i);
    // }
    // printf("\nThe Sum is : %d", sum);

    int i = 1, sum = 0;
    printf("The first 10 natural number is : \n");
    while (i <= 10)
    {
        sum += i;
        printf("%d ", i);
        i++;
    }
    printf("\nThe Sum is : %d", sum);

    return 0;
}