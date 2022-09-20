#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "sin (100) = " << sin(100.00) << "\n";
    std::cout << "cos (100) = " << cos(100.00) << "\n";
    std::cout << "tan (100) = " << tan(100.00) << "\n";
    std::cout << "pow (100) = " << pow(7.0, 9.0) << "\n";
    std::cout << "log10 (10) = " << log10(10.00) << "\n";
    std::cout << "sqrt (2) = " << sqrt(2.00) << "\n";

    return 0;
}