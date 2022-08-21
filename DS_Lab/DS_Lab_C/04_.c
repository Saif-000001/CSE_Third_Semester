// Algorithm Factorial
// step-1: Read number n
// step-2: if n==0  then return 1
// step-3: call fuction(n-1)
// step-4: n*fuction(n-1)
// step-5: exit

#include <stdio.h>

// function to find factorial of given number
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int num = 5;
    printf("\nFactorial of %d is %d\n", num, factorial(num));
    return 0;
}