#include <stdio.h>

int main()
{
    int row, col, i, j;
    scanf("%d%d", &row, &col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (arr[i][j] == i + 1 && arr[i][j] == j + 1)
            {
                arr[i][j] += 3;
            }
            else if (arr[i][j] == i + 1 && arr[i][j] != j + 1)
            {
                arr[i][j] += 2;
            }
            else if (arr[i][j] != i + 1 && arr[i][j] == j + 1)
            {
                arr[i][j] += 1;
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}