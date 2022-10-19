#include <stdio.h>

int main()
{
    int temp;
    scanf("%d", &temp);
    if (temp < 0)
    {
        printf("It's Freezing weather");
    }
    else if (temp >= 0 && 10 > temp)
    {
        printf("It's Very Cold weather");
    }
    else if (temp >= 10 && 20 > temp)
    {
        printf("It's Cold weather");
    }
    else if (temp >= 20 && 30 > temp)
    {
        printf("It's Normal in Temp");
    }
    else if (temp >= 30 && 40 > temp)
    {
        printf("It's Hot");
    }
    else
    {
        printf("Its Very Hot");
    }

    return 0;
}