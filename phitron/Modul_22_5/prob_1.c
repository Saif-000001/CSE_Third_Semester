#include <stdio.h>
#include <string.h>

int strF(char ch[], int n)
{
    int flog = 1;

    for (int i = 0; i < strlen(ch); i++)
    {
        if (ch[i] != '0' && ch[i] != '1')
        {
            flog = 0;
            break;
        }
    }
    return flog;
}

int main()
{
    char str[100];
    scanf("%s", str);

    int len = strF(str, 100);
    if (len == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}