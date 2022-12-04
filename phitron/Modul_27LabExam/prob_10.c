#include <stdio.h>
#include <math.h>

int finDigit(int n)
{
    int flag = 0;
    while (n != 0)
    {
        int mod = n % 10;
        if (mod == 7)
            flag = 1;
        n /= 10;
    }
    return flag;
}

int countDigit(int arr[], int n)
{
    int count = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = finDigit(*(arr + i));
        if (ans == 1)
        {
            count++;
        }
    }
    return count;
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

    double num;
    int nm;
    if (n % 2 != 0)
    {
        num = n / 2.0;
        nm = ceil(num);
    }
    else
    {
        nm = n / 2;
    }

    int *ptr = arr;

    int count = countDigit(ptr, n);

    if (count >= nm)
    {
        printf("Beautiful\n");
    }
    else
    {
        printf("Ugly");
    }
}