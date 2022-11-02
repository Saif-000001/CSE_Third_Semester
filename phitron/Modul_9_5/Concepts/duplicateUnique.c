#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int input[n];
    // input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }

    // large
    int largest = input[0];
    for (int i = 0; i < n; i++)
    {
        if (input[i] > largest)
        {
            largest = input[i];
        }
    }

    int arr[largest + 1];
    for (int i = 0; i <= largest; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        arr[input[i]] += 1;
    }

    int duplicate = 0, unique = 0;
    for (int i = 1; i <= largest; i++)
    {
        if (arr[i] == 1)
        {
            unique++;
        }
        else if (arr[i] > 1)
        {
            duplicate++;
        }
    }
    printf("Unique : %d\n", unique);
    printf("Duplicate : %d\n", duplicate);
    return 0;
}