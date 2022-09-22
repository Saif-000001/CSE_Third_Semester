#include <iostream>

int main()
{
    int n, size, sum = 0;

    std::cout << "Enter size : ";
    std::cin >> size;

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter number : ";
        std::cin >> n;
        if (n > 0)
        {
            sum += i;
        }
    }
    std::cout << sum << " valores positivos " << std::endl;
}