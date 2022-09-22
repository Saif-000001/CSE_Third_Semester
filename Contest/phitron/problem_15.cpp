#include <iostream>

int main()
{
    int n;
    std::cout << "Enter number : ";
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << i << " ^ "
                      //   << " 2 = " << pow(i, 2) << std::endl;
                      << " 2 = " << i * i << std::endl;
        }
    }
}