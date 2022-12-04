#include <stdio.h>
#include <string.h>

void func(char str[], int n)
{
    char ch[n];
    int index = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            ch[index] = str[i];
            index++;
            ch[index] = str[i];
            index++;
        }
        else
        {
            ch[index] = str[i];
            index++;
        }
    }
    printf("%s", ch);
}

int main()
{
    char str[100];
    gets(str);
    int n = strlen(str);

    func(str, n);
}
