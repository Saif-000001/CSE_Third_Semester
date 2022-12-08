#include <stdio.h>

void passByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("After the swapping value a = %d , b = %d\n", a, b); // swapping in this
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("Before the swapping value a = %d , b = %d\n", a, b);
    passByValue(a, b); // this is not change in main function pass by value
    printf("After the swapping value a = %d , b = %d\n", a, b);

    return 0;
}