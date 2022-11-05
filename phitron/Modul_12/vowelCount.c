#include <stdio.h>

int main()
{
    char sent[100];
    // scanf("%s", sent);
    // gets(sent);
    fgets(sent, sizeof(sent), stdin);
    int count = 0;
    for (int i = 0; sent[i] != '\0'; i++)
    {
        if (sent[i] == 'a' || sent[i] == 'e' || sent[i] == 'i' || sent[i] == 'o' || sent[i] == 'u')
        {
            count++;
        }
    }
    printf("Number of vowel counter : %d", count);
}