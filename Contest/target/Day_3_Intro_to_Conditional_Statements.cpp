// If n is odd, print Weird
// If n is even and in the inclusive range 2 of 5 to , print Not Weird
// If n is even and in the inclusive range 6 of 20 to , print Weird
// If n is even and greater than 20, print Not Weird

#include <iostream>

int main()
{
    int N;
    std::cout << "Enter number : ";
    std::cin >> N;

    if (N % 2 == 0)
    {
        if (N <= 2 && N <= 5 || N >= 20)
        {
            std::cout << "Not Weird" << std::endl;
        }
        else if (N >= 6 && N < 20)
        {
            std::cout << "Weird" << std::endl;
        }
        else
        {
            std::cout << "Weird" << std::endl;
        }
    }
    else
    {
        std::cout << "Weird" << std::endl;
    }

    return 0;
}