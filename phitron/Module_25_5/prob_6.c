#include <stdio.h>

int main()
{
    int r, k, l;
    scanf("%d%d%d", &r, &k, &l);

    int *a = &r;
    int *b = &k;
    int *c = &l;
    printf("%d ", *a + *b + *c);
    return 0;
}