#include <stdio.h>

void consecutiveEvenNumber(int n)
{

    int sum = 0;
    int div = n / 4 - 3;
    while (n != sum)
    {
        if (div % 2 == 0)
        {
            printf("%d ", div);
            sum += div;
        }
        div++;
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        consecutiveEvenNumber(n);
        printf("\n");
    }
    return 0;
}