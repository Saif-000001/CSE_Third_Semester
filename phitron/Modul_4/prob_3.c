#include <stdio.h>

int main()
{
    // int sum = 0;
    // printf("The first 7 natural number is : \n");
    // for (int i = 1; i <= 7; i++)
    // {
    //     printf("%d ", i);
    //     sum += i;
    // }
    // printf("\nThe Sum of Natural Number upto 7 terms : %d", sum);

    int i = 1, sum = 0;
    printf("The first 7 natural number is : \n");
    while (i <= 7)
    {
        printf("%d ", i);
        sum += i;
        i++;
    }
    printf("\nThe Sum of Natural Number upto 7 terms : %d", sum);

    return 0;
}