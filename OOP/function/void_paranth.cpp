
// Function with argument but no return value
#include <iostream>

void sumNumber(int n); //  argument but no return value
int main()
{
    int n;
    std::cout << "Enter the number of N : ";
    std::cin >> n;
    sumNumber(n);
}
void sumNumber(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }
    std::cout << sum << std::endl;
}