#include <iostream>

void swap(std::string &a, std::string &b);
int main()
{
    std::string first_name = "Caleb";
    std::string last_name = "Curry";
    swap(first_name, last_name);
    std::cout << "First_name : " << first_name << " Last_name : " << last_name << std::endl;
}

void swap(std::string &a, std::string &b)
{
    std::string temp = a;
    a = b;
    b = temp;
    std::cout << "First_name : " << a << " Last_name : " << b << std::endl;
}