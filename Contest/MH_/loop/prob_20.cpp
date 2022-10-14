#include <iostream>

int main()
{
    int n, sum = 1;
    std::string s;
    std::cin >> n >> s;
    int l = s.size();
    while (1 < n)
    {
        sum *= n;
        n = n - l;
        // std::cout << n << " ";
    }
    std::cout << sum << std::endl;
}