#include <stdio.h>

int main()
{
    char name[15];
    scanf("%s", name);

    // char name[15] = {"Farhan Feroz"};
    // printf("The name is %s ", name);
    name[4] = 'i';
    // name[5] = '\0';
    name[12] = 'X';
    name[13] = '\0';

    // printf("%c", name[12]);
    printf("%s", name);
    return 0;
}