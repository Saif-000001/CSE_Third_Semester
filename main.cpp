
// the Virtual Function
#include <iostream>

class A // Declaring a Base class
{
public:
    virtual void display() // virtual function
    {
        std::cout << "Called virtual Base Class function \n\n";
    }
    void print()
    {
        std::cout << "Called A print function \n\n";
    }
};
class A_Child : public A // Declaring a Child Class
{
public:
    void display()
    {
        std::cout << "Called A_Child Display Function \n\n";
    }

    void print()
    {
        std::cout << "Called A_Child print Function \n\n";
    }
};
int main()
{

    A *base; // Create a reference of class bird
    A_Child child;
    base = &child;

    base->A::display(); // This will call the virtual function

    base->print(); // this will call the non-virtual function
}
