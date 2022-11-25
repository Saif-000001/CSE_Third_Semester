#include <stdio.h>
#include <string.h>

void stringSwap(char str[]);

int main()
{
    char str[100];
    scanf("%s", &str);

    // gets(str);

    stringSwap(str);

    return 0;
}

void stringSwap(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    printf("%s", str);
}
