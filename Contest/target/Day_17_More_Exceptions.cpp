#include <iostream>
#include <cmath>

class Calculator
{
public:
    int power(int n, int p)
    {
        try
        {
            if (n < 0 || p < 0)
            {
                throw std::runtime_error("n and p should be non-negative");
            }
        }
        catch (std::string s)
        {
            std::cerr << s << '\n';
        }
        return pow(n, p);
    }
};

int main()
{
    Calculator myCalculate = Calculator();

    int n, p, t;
    std::cin >> t;
    while (t-- > 0)
    {
        if (std::cin >> n >> p)
        {
            try
            {
                int ans = myCalculate.power(n, p);
                std::cout << ans << std::endl;
            }
            catch (std::exception &e)
            {
                std::cerr << e.what() << '\n';
            }
        }
    }
}