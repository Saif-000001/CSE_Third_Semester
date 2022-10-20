#include <iostream>

class A
{
    int a;

public:
    ~A()
    {
        std::cout << "Destructor\n";
    }
    A()
    {
        std::cout << "Constructor\n";
    }
};
A obj1;
int main()
{
    A obj2, obj3;
    {
        A obj4;
        std::cout << "Local object \n "
                  << "----------------\n"
                  << std::endl;
    }
}