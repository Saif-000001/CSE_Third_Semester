#include <iostream>

int main()
{
    int sum = 0, n;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}