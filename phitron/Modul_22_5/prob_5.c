#include <stdio.h>

void matrixMult(int n, int m, int mult[n][m], int arr1[n][m], int arr2[n][m])
{
    if (m == n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                mult[i][j] = 0;
                for (int k = 0; k < m; k++)
                {
                    mult[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%d ", mult[i][j]);
            }
            printf("\n");
        }
    }
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int arr1[n][m], arr2[n][m], mult[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    matrixMult(n, m, mult, arr1, arr2);

    return 0;
}