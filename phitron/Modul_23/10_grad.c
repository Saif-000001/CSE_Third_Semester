#include <stdio.h>

char gradFunc(int n);

int main()
{
    int n;
    scanf("%d", &n);

    char ans = gradFunc(n);
    printf("%c\n", ans);
    return 0;
}

char gradFunc(int n)
{
    if (80 <= n && n <= 100)
        return 'A';
    else if (60 <= n && n < 80)
        return 'B';
    else if (40 <= n && n < 60)
        return 'C';
    else
        return 'F';
}