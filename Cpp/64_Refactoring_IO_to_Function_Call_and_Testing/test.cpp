#include <iostream>

double square(double x);

int main()
{
    // if (square(-5) == 25)
    if (square(5) == 25)
    {
        std::cout << "Test passed \n";
    }
    return 0;
}

double square(double x)
{
    return x * x;
}