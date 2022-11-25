#include <stdio.h>

int sorted(int arr[], int n);

int median(int arr[], int n, int low, int heigh);
// void printArray(int arr[], int n);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int ans = median(arr, n, 0, n - 1);
    printf("%d ", ans);
}

int sorted(int arr[], int n)
{
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
}

// void printArray(int arr[], int n)
// {
//     int ans = sorted(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         // printf("Sorted array = %d ", arr[i]);
//         // return arr[i];
//     }
//     printf("\n");
// }

int median(int arr[], int n, int low, int heigh)
{
    // printArray(arr, n);
    int ans = sorted(arr, n);
    int mid = low + (heigh - low) / 2;
    if (n % 2 == 0)
    {
        return (arr[mid] + arr[mid + 1]) / 2;
    }
    else
    {
        return arr[mid];
    }
}