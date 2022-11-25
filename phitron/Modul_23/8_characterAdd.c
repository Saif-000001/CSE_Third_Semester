#include <stdio.h>

int main()
{
    char ch[100];
    scanf("%s", &ch);
    int x;
    scanf("%d", &x);

    for (int i = 0; ch[i] != 0; i++)
    {
        char d = 'z' - ch[i];
        if (d >= x)
        {
            ch[i] += x;
        }
        else
        {
            ch[i] += d;
            char d2 = x - d;
            ch[i] = ('a' + d2) - 1;
        }
    }

    printf("%s ", ch);
}