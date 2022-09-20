#include <iostream>

class constructor
{
public:
    int a;
    int b;
    constructor()
    {
        a = 40;
        b = 30;
    }
};

int main()
{
    constructor c;
    std::cout << "a = " << c.a << "\tb = " << c.b << std::endl;
    return 0;
}