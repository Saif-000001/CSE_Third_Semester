#include <stdio.h>

int last_first_sum();

int main()
{
    int ans = last_first_sum();
    printf("Sum = %d", ans);
}

int last_first_sum()
{
    int n, temp, i, sum = 0, last, first;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        temp = arr[i];

        last = temp % 10;
        while (temp >= 10)
        {
            temp /= 10;
        }
        first = temp;
        sum += first + last;
        // printf("%d ", sum);
    }
    return sum;
}