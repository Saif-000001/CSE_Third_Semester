#include <iostream>

int main()
{
    int n, sum = 1;
    std::cin >> n;
    for (int i = n; i > 0; i--)
    {
        sum *= i;
    }
    std::cout << sum << std::endl;
}