#include <iostream>

int main()
{
    int n;
    std::cout << "Enter number : ";
    std::cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        int multiple = n * i;
        std::cout << n << " x " << i << " = " << multiple << std::endl;
    }
    return 0;
}