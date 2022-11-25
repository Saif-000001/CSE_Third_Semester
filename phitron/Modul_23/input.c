#include <stdio.h>
int add_three_nums(int a, int b, int c);
int number(int a, int b);

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    // int sum = add_three_nums(a, b, a);
    int sum = number(a, b);
    printf("%d ", sum);
    return 0;
}

int add_three_nums(int a, int b, int c)
{

    return a + b + c;
}

int number(int a, int b)
{
    int ans = add_three_nums(a, b, a);
}