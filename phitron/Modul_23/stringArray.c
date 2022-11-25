#include <stdio.h>
#include <string.h>

int stringArray(char str[]);

int main()
{
    char str[100];
    scanf("%s", &str);

    int string = stringArray(str);
    if (string == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}

int stringArray(char str[])
{
    int flog = 1;

    for (int i = 1; i <= strlen(str); i++)

    {

        if (str[i] != '1' && str[i] != '9' && str[i] != '7')
        {
            flog = 0;
        }
    }
    return 1;
}