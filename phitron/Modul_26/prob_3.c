#include <stdio.h>

int sumOfDigit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    if (isPrime(sumOfDigit(n)) == 1)
        printf("Farhan's number");
    else
        printf("NO");
    return 0;
}