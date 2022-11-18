#include <stdio.h>
#include <string.h>

int main()
{
    char s[21];
    fgets(s, sizeof(s), stdin);

    int a, b;
    scanf("%d%d", &a, &b);
    int sum = 0;
    int mult = 0;

    for (int i = 0; i <= sizeof(s); i++)
    {
        if (s[i] == '+')
        {
            sum += a + b;
        }
        else if (s[i] == '*')
        {
            mult += a * b;
        }
    }

    int summation = sum + mult;
    printf("%d\n", summation);

    return 0;
}