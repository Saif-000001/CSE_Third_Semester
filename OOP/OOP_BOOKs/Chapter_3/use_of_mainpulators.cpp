#include <iostream>
#include <iomanip> // for setw

int main()
{
    int basic = 75, allowance = 77, total = 245;

    std::cout << std::setw(10) << "basic " << std::setw(10) << basic << std::endl;
    std::cout << std::setw(10) << "allowance" << std::setw(10) << allowance << std::endl;
    std::cout << std::setw(10) << "total" << std::setw(10) << total << std::endl;
}