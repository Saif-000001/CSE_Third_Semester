#include <stdio.h>

void transposeMatrix(int arr[100][100], int trans[100][100], int n, int m);
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[100][100];
    int trans[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("General matrix \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    transposeMatrix(arr, trans, n, m);
    return 0;
}

void transposeMatrix(int arr[100][100], int trans[100][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            trans[j][i] = arr[i][j];
        }
    }

    printf("Transpose matrix \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
}