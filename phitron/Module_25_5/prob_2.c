#include <stdio.h>

int sorting(int arr[], int n);
int largeNumber(int arr[], int n, int k);
int smallNumber(int arr[], int n, int k);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);
    int large = largeNumber(arr, n, k);
    int small = smallNumber(arr, n, k);

    printf("%dth largest element = %d\n", k, large);
    printf("%dth largest element = %d\n", k, small);

    return 0;
}

int sorting(int arr[], int n)
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
    return -1;
}

int largeNumber(int arr[], int n, int k)
{
    int sort = sorting(arr, n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[k + 1])
        {
            return arr[i];
        }
    }
    return -1;
}

int smallNumber(int arr[], int n, int k)
{
    int sort = sorting(arr, n);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[k - 1])
        {
            return arr[i];
        }
    }
    return -1;
}