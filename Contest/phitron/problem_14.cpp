#include <iostream>

int main()
{
    int n, size;
    std::cout << "Enter the size : ";
    std::cin >> size;

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter number : ";
        std::cin >> n;

        if (n == 0)
        {
            std::cout << "NULL" << std::endl;
        }
        else
        {
            if (n % 2 == 0)
            {
                std::cout << "EVEN";
            }
            else
            {
                std::cout << "ODD";
            }
            if (n < 0)
            {
                std::cout << " NEGATIVE" << std::endl;
            }
            else
            {
                std::cout << " POSITIVE" << std::endl;
            }
        }
    }
    return 0;
}