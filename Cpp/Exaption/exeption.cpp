#include <iostream>

int main()
{
    try
    {
        int n1, n2;
        std::cout << "Enter numbers : ";
        std::cin >> n1 >> n2;

        if (n2 == 0)
        {
            throw -1;
        }

        double div = (double)n1 / n2;
        std::cout << div << std::endl;
    }
    // catch (int x)
    catch (...)
    {
        std::cout << "Not possible and try again " << std::endl;
    }
}