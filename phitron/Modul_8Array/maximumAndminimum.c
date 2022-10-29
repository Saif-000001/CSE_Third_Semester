#include <stdio.h>

int main()
{
    int n = 5;
    int arr[] = {15, 12, 13, 10, 75};

    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }

    int m = arr[0];
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
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
        m = arr[1];
    }
    printf("Second minimum = %d\n", m);
}