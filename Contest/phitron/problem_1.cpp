#include <iostream>

int main()
{
    int arr[100];
    int n;
    std::cout << "Enter size : ";
    std::cin >> n;

    for (int i = 0; i < n;)
    {
        std::cout << "Enter number : ";
        std::cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            std::cout << "Even" << std::endl;
        }
        else
        {
            std::cout << "Odd" << std::endl;
        }
        i++;
    }
}