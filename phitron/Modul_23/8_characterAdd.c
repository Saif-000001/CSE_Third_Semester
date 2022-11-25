#include <stdio.h>

int main()
{
    char ch[100];
    scanf("%s", &ch);
    int x;
    scanf("%d", &x);

    for (int i = 0; ch[i] != 0; i++)
    {

        ch[i] += x;
    }

    printf("%s ", ch);
}