#include <iostream>

int main()
{
    int n, reverse = 0, remainder, original;
    std::cin >> n;
    original = n;
    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
        // std::cout << reverse << std::endl;
    }
    if (original == reverse)
    {
        std::cout << "Palindrome number " << reverse << std::endl;
    }
    else
    {
        std::cout << "Not palindrome number " << reverse << std::endl;
    }
    return 0;
}