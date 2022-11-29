#include <stdio.h>
#include <math.h>

void costIsPower(char arr[], int n);

int main()
{
    char arr[100];
    scanf("%s", arr);

    costIsPower(arr, 100);
}

void costIsPower(char arr[], int n)
{
    int sum = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        arr[i] -= 96;
        sum += arr[i];
    }

    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            count++;
        }
    }

    int power = pow(2, count);

    if (sum == power)
    {
        printf("YES\n");
        printf("cost = 2^%d", count);
    }
    else
    {
        printf("NO\n");
    }
}