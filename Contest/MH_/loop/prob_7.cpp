#include <iostream>

int main()
{
    int sum = 0, n, x = 1, pro = 1;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int sumAdd = 0;
        int sumInt = 1;

        for (int j = i; j > 0; j--)
        {

            sumAdd += x; // 1 + 2 + 4 + 4

            std::cout << sumAdd << " ";
            for (int k = j; k > 0; k--)
            {

                sumInt *= sumAdd; // 1 = 2 =  = 16

                std::cout << sumInt << std::endl;
            }
            x++;
        }

        sum += sumInt;
    }

    std::cout << sum << std::endl;
}