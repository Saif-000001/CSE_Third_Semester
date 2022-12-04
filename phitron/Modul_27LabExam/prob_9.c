#include <stdio.h>

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
        return 1;
    }
}

int avgN(int ptr[], int n)
{
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (ptr[i] % 2 == 0)
        {
            sum += ptr[i];
            count++;
        }
    }
    int avg = sum / count;
    return avg;
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
    int *ptr = arr;
    int count = 0;
    int prime = 0;
    for (int i = 0; i < n; i++)
    {
        prime = isPrime(ptr[i]);
        if (prime == 1)
        {
            count++;
        }
    }
    printf("Prime numbers: %d\n", count);
    double avg = avgN(ptr, n);

    printf("Average of all even integers: %.2lf\n", avg);
}