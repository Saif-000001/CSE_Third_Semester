#include <iostream>
#include <cmath>

int main()
{
    int n, sum = 0;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // int po = pow(i, 2); // 1^2 + 2^2 +..................+n^2
        int po = pow(i, i); // 1^1 + 2^2 + 3^3 +................+n^n
        sum += po;
    }
    std::cout << sum << std::endl;
}