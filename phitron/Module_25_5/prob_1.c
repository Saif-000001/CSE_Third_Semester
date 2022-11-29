#include <stdio.h>

int totalCounting(int arr[], int n, int k);
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
    int ans = totalCounting(arr, n, k);
    printf("%d ", ans);
    return 0;
}
int totalCounting(int arr[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            continue;
        }
        else
        {
            count++;
        }
    }
    return count;
}