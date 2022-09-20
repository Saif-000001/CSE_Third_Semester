#include <iostream>

int area(int n);
int area(int x, int y);
double area(double x);

int main()
{
    std::cout << "Square area = " << area(5) << std::endl;
    std::cout << "Rectangle area = " << area(4, 7) << std::endl;
    std::cout << "radius area = " << area(9.17) << std::endl;
}

int area(int n)
{
    return (n * n);
}

int area(int x, int y)
{
    return (x * y);
}

double area(double f)
{
    return (3.1416 * f * f);
}