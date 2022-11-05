#include <stdio.h>

int main()
{
    // char ch = 'A';
    // ch += 32;
    // printf("%d", ch);

    // char ch = 'a';
    // ch -= 32;
    // printf("%c", ch);

    char name[1000];

    fgets(name, sizeof(name), stdin);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
            name[i] -= 32;
    }
    puts(name);
    // fputs(name, stdout);

    return 0;
}