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
    int flog;
    for (int i = 0; i < n; i++)
    {
        flog = 0;
        if (arr[i] == 0 || arr[i] == 1)
        {
            flog = 1;
        }
        for (int j = 2; j <= arr[i] / 2; j++)
        {
            if (arr[i] % j == 0)
            {
                flog = 1;
                break;
            }
        }
        if (flog == 0 && flog != 1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}