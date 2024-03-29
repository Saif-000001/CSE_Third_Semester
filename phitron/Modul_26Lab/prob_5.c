#include <stdio.h>

int is_leap(int y)
{
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
    {
        return 1;
    }
    return 0;
}

int is_distinct(int n)
{
    int dl;
    int countDigit[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    while (n > 0)
    {
        dl = n % 10;
        countDigit[dl]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        // printf("%d -> %d\n", i, countDigit[i]);
        if (countDigit[i] > 1)
            return 0;
    }
    return 1;
}

int main()
{
    // is_countDigit(2542);
    int year;
    scanf("%d", &year);

    if (is_leap(year) == 1 && is_distinct(year) == 1)
        printf("Beautiful\n");
    else
        printf("Ugly\n");
    return 0;
}