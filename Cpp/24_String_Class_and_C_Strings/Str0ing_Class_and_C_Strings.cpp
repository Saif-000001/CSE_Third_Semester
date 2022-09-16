#include <iostream>

int main()
{
    std::string greeting = "Hello";
    std::string complete_greeting = greeting + " there";
    complete_greeting += "!";
    std::cout << complete_greeting << std::endl;
    std::cout << complete_greeting.length() << std::endl;

    // method = member function = functions attached to objects

    char name[] = "caleb"; // c string = array of character "caleb\0"
    std::cout << name << std::endl;
    std::cout << sizeof(name) << std::endl; // 6

    // std::string writing;
    // std::cin >> writing;
    // std::cout << writing << std::endl;

    // get line for string

    // std::string st;
    // std::cin >> st;
    // std::string left_st;
    // std::cin >> left_st;

    // std::cout << st << std::endl;
    // std::cout << left_st << std::endl;

    std::string greet;
    std::getline(std::cin, greet);
    std::cout << greet << std::endl;
    return 0;
}