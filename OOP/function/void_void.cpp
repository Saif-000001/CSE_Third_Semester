
// Function with no argument and no return value
#include <iostream>

void sumNumber(); // No argument and no return value
int main()
{
    sumNumber();
}

void sumNumber()
{
    int n, sum = 0;
    std::cout << "Enter the number of N : ";
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }
    std::cout << sum << std::endl;
}