#include <iostream>

int recursion(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * recursion(n - 1);
    }
}

int main()
{
    int n = 5;
    std::cout << recursion(n);
    return 0;
}