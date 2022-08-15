#include <iostream>

int main()
{
    int i = 0, sum = 0, n;
    std::cout << "Enter the number : ";
    std::cin >> n;
    do
    {
        sum += i;
        i++;
    } while (i < n);

    std::cout << sum << std::endl;
}