#include <iostream>

int sumNumber();
int main()
{

    std::cout << sumNumber();
}

int sumNumber()
{
    int n;
    std::cout << "Enter the number of N : ";
    std::cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }
    return sum;
}