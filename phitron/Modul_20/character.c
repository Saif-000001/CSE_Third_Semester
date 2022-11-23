#include <stdio.h>

int is_Vowel(char ch)
{
    if (ch == 'a' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'e')
        return 1;
    else
        return 0;
}

int main()
{
    char ch;
    ch = getchar();
    getchar();

    if (is_Vowel(ch) == 1)
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }
    return 0;
}