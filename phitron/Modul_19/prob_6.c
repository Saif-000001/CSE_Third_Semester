#include <stdio.h>

int main()
{
    int n, count = 0, t_count = 1;
    scanf("%d", &n);
    char s[n + 5];
    scanf("%s", s);
    char c = s[0];
    for (int i = 0; i < n; i++)
    {
        if (s[i] == c)
        {
            count++;
            if (t_count < count)
                t_count = count;
        }
        else
        {
            count = 1;
            c = s[i];
        }
    }

    printf("%d", t_count);
    return 0;
}