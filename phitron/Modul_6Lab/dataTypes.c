#include <stdio.h>

int main()
{
    printf("%d ", sizeof(int));           // 4
    printf("%d ", sizeof(long int));      // 4
    printf("%d ", sizeof(long long int)); // 8
    printf("%d ", sizeof(float));         // 4
    printf("%d ", sizeof(double));        // 8
    printf("%d ", sizeof(char));          // 1

    // Arithmetic operator + , - , * , / , %
    // Relation operator < , >, <= , >= , !=
    // Bitwise operator or logical && , || , !
    // Increment or decrement ++ , --
}