#include <iostream>
#include <vector>

std::vector<int> problemStored(int n)
{
    std::vector<int> res;
    for (int i = 0; i < n; i++)
    {
        if (n > 0)
        {
            res[i] = n / 2;
            res[i] = n % 2 + n / 2;
        }
    }
    return res;
}

int main()
{

    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a;
        std::cin >> a;

        std::vector<int> vec = problemStored(a);
        std::cout << vec[0] << " " << vec[1];
    }
}