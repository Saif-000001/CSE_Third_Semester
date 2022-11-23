#include <stdio.h>

int arr_them(int n, int arr[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {14, 25, 35, 12, 14, 154, 156, 25};

    int sum = arr_them(8, arr);
    printf("The sum is %d ", sum);
    return 0;
}