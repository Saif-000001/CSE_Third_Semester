#include <stdio.h>

int main()
{
    int n = 5;
    int arr[] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            // printf("%d, ", arr[i]);
        }
        for (int i = 0; i < size; i++)
        {
            printf("%d, ", arr[i]);
        }
        printf("\n");

        // printf("\n");
    }
}