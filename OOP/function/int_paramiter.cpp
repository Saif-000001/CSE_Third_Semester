#include <iostream>
// using namespace std;
int sum(int n);

int main()
{
    int n;
    std::cout << "Enter the number of N : ";
    std::cin >> n;
    int s = sum(n);
    std::cout << s << std::endl;
}

int sum(int n)
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += i;
    }
    return sum;
}