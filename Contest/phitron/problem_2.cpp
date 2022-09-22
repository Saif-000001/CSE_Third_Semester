#include <iostream>

int main()
{
    int n;
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Enter the number : ";
        std::cin >> n;

        if (n % 2 == 0)
        {
            std::cout << "Even" << std::endl;
        }
        else
        {
            std::cout << "Odd" << std::endl;
        }
    }
}