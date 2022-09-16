#include <iostream>

int main()
{
    std::string password = "helloTacos123";
    std::string guess;
    do
    {
        std::cout << "Guess the password : ";
        std::cin >> guess;
    } while (password != guess);
}