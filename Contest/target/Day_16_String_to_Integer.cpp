
#include <iostream>

int main()
{
    std::string S;
    std::cin >> S;
    try
    {
        int n = stoi(S);
        std::cout << n << std::endl;
    }
    catch (std::exception s)
    {
        std::cout << "Bad String" << std::endl;
    }

    return 0;
}