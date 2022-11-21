#include <stdio.h>

void evenNumber(int n);
int main()
{
    int n;
    scanf("%d", &n);
    evenNumber(n);
}
void evenNumber(int n)
{
    for (int i = 2; i <= n; i += 2)
    {
        printf("%d ", i);
    }
}