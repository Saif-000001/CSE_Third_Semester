#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        sum += count;
        count++;

        if (count % 3 == 0)
        {
            count--;
        }
    }
    printf("%d\n", sum);
}