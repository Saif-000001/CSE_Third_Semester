#include <stdio.h>

void string_add(char ch[], int n)
{
    char sum = '\0';
    for (int i = 0; ch[i] != '\0'; i++)
    {
        sum += ch[i];
    }

    printf("%s ", sum);
}
int main()
{

    int n;
    scanf("%d", &n);
    char ch[n];
    for (int i = 1; i <= n; i++)
    {
        fgets(ch, n, stdin);
    }

    string_add(ch, n);

    // printf("%s ", ans);
}