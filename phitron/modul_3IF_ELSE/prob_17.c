#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
    {
        printf("The alphabet is a vowel.");
    }
    else if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        printf("The alphabet is a consonant.");
    }
    else
    {
        printf("The character is not alphabet.");
    }

    return 0;
}