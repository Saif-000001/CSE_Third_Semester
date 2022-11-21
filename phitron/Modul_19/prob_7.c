#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    char testCase[t][25];

    for (int i = 0; i < t; i++)
    {
        scanf("%s", testCase[i]);
    }

    for (int i = 0; i < t; i++)
    {
        char string[25], string2[25];
        strcpy(string, testCase[i]);
        strcpy(string2, testCase[i]);

        int len = strlen(string), count = 0;
        if (len < 2)
        {
            printf("Case #1: Not Palindrome\n");
            continue;
        }
        for (int i = 0, j = len - 1; i < len;)
        {
            if (string[i] == string2[j])
            {
                count++;
            }
            i++;
            j--;
        }

        if (len == count)
        {
            if (len <= 7)
            {
                printf("Case #3: %s\n", string);
            }
            else
            {
                printf("Case #2: %c%d%c\n", string[0], len - 2, string[len - 1]);
            }
        }
        else
        {
            printf("Case #1: Not Palindrome\n");
        }
    }
}