#include <stdio.h>

void evenCharacter(char str[], int n)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] % 2 == 0)
        {
            str[i] -= 32;
        }
        else
        {
            // str[i] = str[i];
        }
    }
    printf("%s ", str);
}
int main()
{
    char str[100];
    scanf("%s", &str);
    evenCharacter(str, 100);
}