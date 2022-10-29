#include <stdio.h>

int main()
{
    int n = 5;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int e_count = 0, o_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            e_count++;
        else
            o_count++;
    }

    printf("Even = %d\n", e_count);
    printf("Odd = %d\n", o_count);
    return 0;
}