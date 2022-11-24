#include <stdio.h>
#include <string.h>

void string_add(char ch[], int n)
{
    // char sum = '\0';
    // for (int i = 0; ch[i] != '\0'; i++)
    // {
    //     sum += ch[i];
    // }

    // printf("%s ", sum);
}
int main()
{

    int n;
    scanf("%d", &n);
    char ch[1000];
    int i;
    for (i = 1; i <= n; i++)
    {
        scanf("%s", &ch[i]);
    }

    strcat(ch, " ");
    printf("%s", ch);
}