#include <stdio.h>

int shat_present(int n);
int dgSum(int n);
int last_prim(int n);

int main()
{
    int n;
    scanf("%d", &n);
    if (shat_present(n) == 1 && dgSum(n) > 10 && last_prim(n) == 1)
    {
        printf("Farhan's number\n");
    }
    else
    {
        printf("No\n");
    }
}

int shat_present(int n)
{
    while (n > 0)
    {
        if (n % 10 == 1)
        {
            return 1;
        }
        n /= 10;
    }
    return 0;
}
int dgSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
int last_prim(int n)
{
    int last = n % 10;
    if (last == 2 || last == 3 || last == 5 || last == 7)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}