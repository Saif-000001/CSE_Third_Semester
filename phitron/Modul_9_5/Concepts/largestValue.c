// 3 largest value
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int input[n];

    //    input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }

    // largest value
    int large = input[0];
    for (int i = 1; i < n; i++)
    {
        if (input[i] > large)
        {
            large = input[i];
        }
    }

    int arr[large + 1]; // we know array start 0 -> this cause add + 1

    // large element array
    for (int i = 0; i <= large; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        arr[input[i]] += 1;
    }

    int count = 0;
    for (int i = large; i >= 1; i--)
    {
        if (arr[i] == 1)
        {
            count++;
        }

        if (count == 3)
        {
            printf("%d", i);
            break;
        }
    }
}