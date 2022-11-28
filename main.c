#include <stdio.h>

int main()
{
    int n, m, i, j;
    scanf("%d%d", &n, &m);
    int arr[n][m];
    for (i = 0; i < n; i++)
    {
        int a = 1, b = 1;
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        for (int j = 0; j < m; j++)
        {
            int temp = arr[j][i];
            arr[j][i] = arr[i][j];
            arr[i][j] = temp;
        }
    }
    printf("Transpose Matrix \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}