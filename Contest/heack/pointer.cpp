// A' = a + b
// A' = |a - b|

#include <iostream>

void update(int *a, int *b);
int main()
{
    int a, b;
    std::cout << "Enter a and b : ";
    std::cin >> a >> b;
    update(&a, &b);
    std::cout << a << " " << b << std::endl;
}

void update(int *a, int *b)
{
    int add, sub;
    add = *a + *b;
    if (*a > *b)
    {
        sub = *a - *b;
    }
    else
    {
        sub = *b - *a;
    }
    *a = add;
    *b = sub;
}