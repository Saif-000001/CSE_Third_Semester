#include <iostream>

int main()
{
    int n, sum = 3;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        sum += 7;
        std::cout << sum << std::endl;
    }
}