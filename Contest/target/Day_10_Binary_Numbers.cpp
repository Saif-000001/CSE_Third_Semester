#include <iostream>

// void binary(int n)
// {
//     int binaryArray[32];
//     int sum = 0, i = 0;
//     while (n > 0)
//     {
//         binaryArray[i] = n % 2;
//         n /= 2;
//         i++;
//     }

//     for (int j = i - 1; j >= 0; j--)
//     {
//         std::cout << binaryArray[j] << " ";
//     }
// }

int main()
{
    int sum = 0, max = 0;
    int n;
    std::cin >> n;
    // binary(n);

    while (n > 0)
    {

        if (n % 2 == 1)
        {
            sum++;
            if (sum > max)
            {
                max = sum;
            }
        }
        else
        {
            sum = 0;
        }
        n /= 2;
    }
    std::cout << max << std::endl;
}