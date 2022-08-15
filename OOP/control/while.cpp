#include <iostream>

int main()
{
    int i = 0, sum = 0, n;
    std::cout << "Enter the number : ";
    std::cin >> n;
    while (i < n)
    {
        sum += i;
        i++;
    }
    std::cout << sum << std::endl;
}