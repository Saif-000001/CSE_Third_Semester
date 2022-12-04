#include <stdio.h>
#include <string.h>

char sortDes(char str[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (str[j] < str[j + 1])
            {
                int temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

// void showString(char str[], int n)
// {
//     char st = sortDes(str, n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%s", str[i]);
//     }
// }

int main()
{
    char str[100];
    scanf("%s", str);
    int n = strlen(str);
    printf("%s ", sortDes(str, n));
    // showString(str, n);
    return 0;
}