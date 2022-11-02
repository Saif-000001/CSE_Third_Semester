#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    int input[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }

    int k, v, q, sum;
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        scanf("%d%d", &k, &v);
        sum = input[k] + v;
        printf("%d \n", sum);
    }
}