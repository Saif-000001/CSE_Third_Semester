// 4th minimum largest value

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

    int count = 0;
    for (int i = 1; i <= largest; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }

        if (count == 4)
        {
            printf("%d", i);
            break;
        }
    }
}