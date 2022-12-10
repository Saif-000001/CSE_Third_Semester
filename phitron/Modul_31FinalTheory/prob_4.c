#include <stdio.h>
#include <string.h>

void Sorting(char str[])
{
    int len = strlen(str);
    int large = str[0];
    for (int i = 0; i < len; i++)
    {
        if (str[i] > large)
        {
            large = str[i];
        }
    }
    int freq[large + 1];
    for (int i = 0; i <= large; i++)
    {
        freq[i] = 0;
        printf("%d ", freq[i]);
    }
    for (int i = 0; i < len; i++)
    {
        freq[str[i]]++;
    }
    char index = 0;
    for (int i = 0; i <= large; i++)
    {
        if (freq[i] == 1)
        {
            str[index] = i;
            index++;
        }
        else if (freq[i] > 1)
        {
            for (int j = 0; j < freq[i]; j++)
            {
                str[index] = i;
                index++;
            }
        }
    }
}
int main()
{
    char str[30];
    scanf("%s", str);
    int len = strlen(str);
    Sorting(str);
    printf("%s", str);
}