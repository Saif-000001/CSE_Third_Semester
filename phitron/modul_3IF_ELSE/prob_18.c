#include <stdio.h>

int main()
{
    int profit, loss;
    scanf("%d %d", &profit, &loss);
    if (loss > profit)
    {
        int sum = loss - profit;
        printf("You can booked your profit amount : %d", sum);
    }
    else
    {
        int sum = profit - loss;
        printf("You can booked your profit amount : %d", sum);
    }
    return 0;
}