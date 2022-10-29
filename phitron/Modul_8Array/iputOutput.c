#include <stdio.h>

int main()
{
    int n = 5;
    int arr[n];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d-th position value = %d\n", i, arr[i]);
    }
}