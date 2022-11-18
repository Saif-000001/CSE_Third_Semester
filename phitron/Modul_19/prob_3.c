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
        for (j = 0; j < col - i; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i][j] += 3;
            }

            if (arr[i][j] == i)
            {
                arr[i][j] += 2;
            }

            if (arr[i][j] == j)
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