#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = arr[0];
    for (int i = 1; i < n; i++)
    {
        // printf("%d \n", arr[i]);
        sum += arr[i];
        // printf("%d ", sum);
    }

    if (sum % 2 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}