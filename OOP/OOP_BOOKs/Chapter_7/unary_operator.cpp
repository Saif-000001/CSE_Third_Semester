#include <iostream>

class Space
{
    int x;
    int y;
    int z;

public:
    void getData(int a, int b, int c);
    void display();
    void operator-();
};

void Space::getData(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}

void Space::display()
{
    std::cout << "x = " << x << std::endl;
    std::cout << "x = " << y << std::endl;
    std::cout << "x = " << z << std::endl;
}

void Space::operator-()
{
    x = -x;
    y = -y;
    z = -z;
}

int main()
{
    Space s;
    s.getData(2, -4, 6);
    // s.display();
    s.operator-();

    -s;
    s.operator-();
    s.display();
}