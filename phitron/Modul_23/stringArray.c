#include <stdio.h>
#include <string.h>

int SearchDigit(char str[], char ch);

int main()
{
    char str[100];
    scanf("%s", str);
    int a = 0, b = 0, c = 0;
    a = SearchDigit(str, '1');
    b = SearchDigit(str, '7');
    c = SearchDigit(str, '9');

    if (a && b && c)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}

int SearchDigit(char str[], char ch)
{
    int flog = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ch)
        {
            flog = 1;
            break;
        }
    }
    return flog;
}