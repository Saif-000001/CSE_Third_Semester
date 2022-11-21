#include <stdio.h>
#include <string.h>

int main()
{
    char s[21];
    fgets(s, sizeof(s), stdin);

    int a, b;
    scanf("%d%d", &a, &b);
    long long int sum = 0;

    for (int i = 0; i <= strlen(s); i++)
    {
        if (s[i] == '+')
        {
            sum += a + b;
        }
        else if (s[i] == '*')
        {
            sum += a * b;
        }
    }

    // int summation = sum + mult;
    printf("%lld\n", sum);

    return 0;
}