#include <stdio.h>

int main()
{
    int w, n, i;
    printf("Enter the number of N : ");
    scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     scanf("%d", &w);
    //     sum += w;
    // }
    int sum = 0;
    i = 1;
    while (i <= n)
    {

        scanf("%d ", &w);
        sum += w;
        i++;
    }

    printf("The sum : %d", sum);
}