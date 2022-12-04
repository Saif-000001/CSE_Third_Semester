#include <stdio.h>

int isPrime(int n)
{
    int flog = 1;
    if (n <= 1)
        flog = 0;
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            flog = 0;
        }
    }
    return flog;
}

double avgN(int ptr[], int n)
{
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) % 2 == 0)
        {
            sum += *(ptr + i);
            count++;
        }
    }
    int avg = sum / count;
    return avg;
}

int checkPrime(int ptr[], int n)
{
    int count = 0, prime = 0;

    for (int i = 0; i < n; i++)
    {
        prime = isPrime(*(ptr + i));
        if (prime == 1)
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
    int *ptr = arr;

    printf("Prime numbers: %d\n", checkPrime(ptr, n));

    printf("Average of all even integers: %.2lf\n", avgN(ptr, n));
}