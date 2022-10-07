#include <iostream>

int sum(int n); // Function declaration

int main()
{
    int n;
    std::cout << "Enter the number of N : ";
    std::cin >> n;

    int s = sum(n); // Function Call

    std::cout << s << std::endl;
}

int sum(int n) // Function definition
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += i;
    }
    return sum;
}