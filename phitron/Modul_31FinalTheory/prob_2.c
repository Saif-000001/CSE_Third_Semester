#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int f1 = 0, f2 = 1, nextTerm, i = 3;
    printf("%d, %d, ", f1, f2);

    nextTerm = f1 + f2;

    while (i < n)
    {
        printf("%d, ", nextTerm);
        f1 = f2;
        f2 = nextTerm;
        nextTerm = f1 + f2;
        i++;
    }
    printf("%d\n", nextTerm);
    return 0;
}