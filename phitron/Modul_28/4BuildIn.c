#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    // int *ptr = (int *)calloc(n, sizeof(int));
    // printf("%d\n", *ptr); // garbegeValue not allow

    int *ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation field\n");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", (ptr + i));
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d th position -> %d\n", i, *(ptr + i));
        }
    }

    // ptr = realloc(ptr, (n + 5) * sizeof(int));

    free(ptr);
    return 0;
}