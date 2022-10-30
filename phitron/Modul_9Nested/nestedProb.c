#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    float x, sum, avg;

    for (int i = 1; i <= n; i++)
    {
        sum = 0.0;
        for (int j = 1; j <= m; j++)
        {
            scanf("%f", &x);
            sum += x;
        }
        avg = sum / m;
        printf("average = %f\n", avg);
    }
    return 0;
}