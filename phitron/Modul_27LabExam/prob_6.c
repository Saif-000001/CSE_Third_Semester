#include <stdio.h>

int divideThree(int n)
{
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        if (n % 3 == 0)
        {
            f = 1;
        }
    }
    return f;
}

int divideFive(int n)
{
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        if (n % 5 == 0 && n % 3 != 0)
        {
            f = 1;
        }
    }
    return f;
}

int totalSum(int arr[], int n)
{
    int count = 0;
    int count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        count1 = divideThree(arr[i]);
        if (count1 == 1)
            count++;
        count2 = divideFive(arr[i]);
        if (count2 == 1)
            count++;
    }

    if (count)
    {
        return count;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int total = totalSum(arr, n);
    printf("%d\n", total);
    return 0;
}