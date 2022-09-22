#include <iostream>

int main()
{
    double total, fix, rec;
    std::cout << "Enter fix Salary : ";
    std::cin >> fix;
    std::cout << "Enter receive salary : ";
    std::cin >> rec;

    total = fix + rec * 0.15;
    std::cout << "TOTAL = " << total << std::endl;
    return 0;
}