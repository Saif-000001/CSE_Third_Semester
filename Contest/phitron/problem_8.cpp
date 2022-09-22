#include <iostream>

int main()
{
    int n, amount1;
    float amount2, SALARY;

    std::cout << "Enter number : ";
    std::cin >> n;
    std::cout << "Enter amount 1 : ";
    std::cin >> amount1;
    std::cout << "Enter amount 2 : ";
    std::cin >> amount2;

    SALARY = amount1 * amount2;

    std::cout << "NUMBER = " << n << std::endl;
    std::cout << "SALARY = U$ " << SALARY << std::endl;
}