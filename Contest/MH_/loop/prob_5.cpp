#include <iostream>

int main()
{
    int formula, n;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        formula = (i * (i + 1) / 2);
    }
    std::cout << formula << std::endl;
}