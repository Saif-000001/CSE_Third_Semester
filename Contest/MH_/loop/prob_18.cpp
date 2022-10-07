#include <iostream>

int fac(int);
int facM(int, int);

int main()
{
    int n, r;
    std::cin >> n >> r;
    std::cout << facM(n, r) << std::endl;
    return 0;
}

int facM(int n, int r)
{
    return (fac(n) / (fac(r) * fac(n - r)));
}
int fac(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int sum = 1;
    for (int i = 2; i <= n; i++)
    {
        sum *= i;
    }
    return sum;
}