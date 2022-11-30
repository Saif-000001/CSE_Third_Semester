#include <stdio.h>

void find_max_min(int arr[], int n, int *p, int *q)
{
    *p = arr[0];
    *q = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > *p)
        {
            *p = arr[i];
        }
        if (arr[i] < *q)
        {
            *q = arr[i];
        }
    }
}

int main()
{
    int arr[] = {12, 6, 3, 4, 7, 5, 6, 12, 9, 75};
    int n = sizeof(arr) / sizeof(int);

    int maxx, minn;
    find_max_min(arr, n, &maxx, &minn);
    printf("%d %d\n", maxx, minn);
}