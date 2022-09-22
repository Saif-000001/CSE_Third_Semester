#include <iostream>

int main()
{
    int n, i = 0;
    std::cout << "Enter number : ";
    std::cin >> n;
    char hexDecimal[100];

    while (n != 0)
    {
        int temp = 0;
        temp = n % 16;
        if (temp < 10)
        {
            hexDecimal[i] = temp + 48;
            i++;
        }
        else
        {
            hexDecimal[i] = temp + 55;
            i++;
        }
        n = n / 16;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        std::cout << hexDecimal[j];
    }
}