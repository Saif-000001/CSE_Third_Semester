#include <iostream>

class Complex
{
    float x, y;

public:
    Complex()
    {
    }
    Complex(float real, float image)
    {
        x = real;
        y = image;
    }

    friend Complex sum(Complex, Complex);
    friend void show(Complex);
};

Complex sum(Complex c1, Complex c2)
{
    Complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;

    return (c3);
}

void show(Complex c)
{
    std::cout << c.x << " + " << c.y << "i" << std::endl;
}

int main()
{
    Complex n1(4.5, 7.5);
    Complex n2(3.5, 5.5);
    Complex n3;

    n3 = sum(n1, n1);

    show(n1);
    show(n2);
    show(n3);
}