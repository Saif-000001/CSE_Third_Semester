#include <iostream>
#include <cmath>

int add(double, int, int);
int main()
{
    double m;
    int t, tx;
    std::cout << "Enter number : ";
    std::cin >> m >> t >> tx;

    std::cout << add(m, t, tx) << std::endl;
}

int add(double meals, int tip, int tax)
{
    double tip_percent = meals / 100 * tip;
    double tax_percent = meals / 100 * tax;

    double sum = meals + tip_percent + tax_percent;
    return sum;
}