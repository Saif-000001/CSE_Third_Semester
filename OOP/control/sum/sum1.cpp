#include <iostream>

int main()
{
    int i = 1, sum = 0, n;
    std::cin >> n;
    do
    {
        if (i % 2 == 1)
        {
            sum += i;
        }
        i++;
    } while (i <= n);
    std::cout << sum << std::endl;
    return 0;
}