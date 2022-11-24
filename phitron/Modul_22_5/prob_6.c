#include <stdio.h>

struct Ruks
{
    int x;
    int y;
};

int main()
{
    int n, count = 0;
    scanf("%d", &n);

    struct Ruks arr[n];
    struct Ruks result[n];

    for (int i = 0; i < n; i++)
    {
        int temp1, temp2;
        scanf("%d %d", &temp1, &temp2);
        struct Ruks t;
        t.x = temp1;
        t.y = temp2;
        arr[i] = t;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i].x == arr[j].x || arr[i].y == arr[j].y)
            {
                arr[i].x = -1;
                arr[i].y = -1;
                arr[j].x = -1;
                arr[j].y = -1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (!(arr[i].x < 0 && arr[i].y < 0))
        {
            count++;
        }
    }
    printf("Safe ruks - %d\n", count);

    for (int i = 0; i < n; i++)
    {
        if (!(arr[i].x < 0 && arr[i].y < 0))
        {
            printf("%d %d", arr[i].x, arr[i].y);
        }
        printf("\n");
    }

    return 0;
}