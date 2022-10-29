#include <stdio.h>

int main()
{
    int firstNumber, secondNumber;
    printf("Enter the first number: ");
    scanf("%d", &firstNumber);
    printf("Enter the second number: ");
    scanf("%d", &secondNumber);

    if (firstNumber > secondNumber && firstNumber % secondNumber == 0)
    {
        printf("The first number is divisible by the second number.");
    }
    else if (secondNumber > firstNumber && secondNumber % firstNumber == 0)
    {
        printf("The second number is divisible by the first number.");
    }
    else
    {
        printf("None of them are divisible by the other.");
    }

    return 0;
}
