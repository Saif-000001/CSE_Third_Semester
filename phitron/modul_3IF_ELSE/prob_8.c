#include <stdio.h>

int main()
{
    int number1, number2, number3;
    scanf("%d %d %d", &number1, &number2, &number3);
    if (number1 > number2 && number1 > number3)
    {
        printf("1st number = %d,\t 2nd number = %d,\t 3rd number = %d,\n", number1, number2, number3);
        printf("The 1st Number is the greatest among three ");
    }
    else if (number2 > number1 && number2 > number3)
    {
        printf("1st number = %d,\t 2nd number = %d,\t 3rd number = %d,\n", number1, number2, number3);
        printf("The 2nd Number is the greatest among three");
    }
    else
    {
        printf("1st number = %d,\t 2nd number = %d,\t 3rd number = %d,\n", number1, number2, number3);
        printf("The 3rd Number is the greatest among three");
    }
    return 0;
}