#include <stdio.h>

int main()
{
    int arr[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}