#include <stdio.h>

int main()
{
    int n, t, countN = 0, count = 0;
    char s[1000][1000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &t);
        for (int j = 0; j < t; j++)
        {
            scanf("%d", &s[i][j]);
            if (s[i][j] == "01")
            {
                count++;
            }
        }
    }
    printf("%d", count);
}