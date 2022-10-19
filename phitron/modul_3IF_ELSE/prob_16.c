#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        printf("This is a character.");
    }
    else if (c >= '0' && c <= '9')
    {
        printf("This is a digit. ");
    }
    else
    {
        printf("This is a special character.");
    }
    return 0;
}