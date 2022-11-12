#include <stdio.h>

int main()
{
    int sum = 0, f = 1, matrix[3][3];

    for (int i = 0; i < 3; i++)
    {
        int totalSum = 0;
        for (int j = 0; j < 3; j++)
        {
            int a;
            scanf("%d", &a);
            matrix[i][j] = a;
            totalSum += a;
        }
        sum = totalSum;
    }

    for (int i = 0; i < 3; i++)
    {
        int rowSum = 0, colSum = 0, cols1 = 0, cols2 = 0;
        for (int j = 0; j < 3; j++)
        {
            rowSum += matrix[i][j];
            colSum += matrix[j][i];
            if (i == 0)
            {
                cols1 = matrix[0][0] + matrix[1][1] + matrix[2][2];
            }
            if (i == 2)
            {
                cols2 = matrix[0][2] + matrix[1][1] + matrix[2][0];
            }
        }

        if (!(rowSum == sum || colSum == sum || cols1 == sum || cols2 == sum))
        {
            f = 0;
        }
    }

    if (f == 1)
    {
        printf("YES\n");
    }

    else
    {
        printf("NO\n");
    }
}