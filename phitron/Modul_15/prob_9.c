#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[101], ch2[102];
    fgets(ch1, sizeof(ch1), stdin);
    fgets(ch2, sizeof(ch2), stdin);

    int len = strlen(ch1) - 1;

    for (int i = 0; i < len; i++)
    {
        if (ch1[i] >= 'A' && 'Z' >= ch1[i])
        {
            ch1[i] += 32;
        }
        if (ch2[i] >= 'A' && 'Z' >= ch2[i])
        {
            ch2[i] += 32;
        }
    }

    for (int i = 0; i < len; i++)
    {
        if (ch1[i] < ch2[i])
        {
            printf("%s then %s", ch1, ch2);
            return 0;
        }
        else if (ch2[i] > ch1[i])
        {
            printf("%s then %s ", ch2, ch1);
            return 0;
        }
        else
        {
            printf("%s", ch1);
            return 0;
        }
    }
}