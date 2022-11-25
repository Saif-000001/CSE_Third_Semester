#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("General Matrix \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                arr[i][j] = arr[i][j];
                continue;
            }
            int temp = arr[i + 1][j];
            arr[i + 1][j] = arr[i][j + 1];
            arr[i][j + 1] = temp;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose Matrix \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}