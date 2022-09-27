#include <iostream>

int main()
{
    std::string one[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a, b;
    std::cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (i <= 9)
        {
            std::cout << one[i] << std::endl;
        }
        else if (i % 2 == 0)
        {
            std::cout << "even" << std::endl;
        }
        else
        {
            std::cout << "odd" << std::endl;
        }
    }
}