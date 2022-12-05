#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    // Run time memory allocation
    int *ptr = (int *)malloc(n * sizeof(int));

    // printf("%d\n", *ptr); gerbageValue in malloc

    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }

    for (int i = 0; i < n; i++)
    {
        // printf("%d th position -> %d \n", i, ptr[i]);
        printf("%d th position -> %d \n", i, *(ptr + i));
    }
    free(ptr);

    // int n;
    // static memory
    // int arr[100]; // compile time memory allocation
    // scanf("%d", &n);
    // int arr[n]; // compile time memory allocation
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = i + 1;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d th position -> %d\n", i, arr[i]);
    // }

    return 0;
}