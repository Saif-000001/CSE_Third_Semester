#include <stdio.h>

int main()
{
    int S, A, B, C, n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d%d", &S, &A, &B, &C);
        printf("%d\n", S - (A + B + C));
    }
}