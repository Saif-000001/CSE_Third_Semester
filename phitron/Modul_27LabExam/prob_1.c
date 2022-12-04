#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int count = 0, sum = 0;
    char ch = '+';
    for (int i = 1; i <= n; i++)
    {
        if (count < 3)
        {
            if (ch == '+')
            {
                sum += i;
            }
            else
            {
                sum -= i;
            }
            count++;
        }
        else
        {
            count = 0;
            if (ch == '+')
            {
                ch = '-';
            }
            else
            {
                ch = '+';
            }

            if (ch == '+')
            {
                sum += i;
            }
            else
            {
                sum -= i;
            }
            count++;
        }
    }
    printf("%d\n", sum);
}