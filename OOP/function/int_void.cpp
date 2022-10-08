
// Function with no argument but return value
#include <iostream>

int sumNumber(); // No argument but return value
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