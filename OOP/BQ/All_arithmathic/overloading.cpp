#include <iostream>

class All_arithmetic
{
    int x;
    int y;

public:
    void input(int a, int b)
    {
        x = a;
        y = b;
        // std::cout << a << "\t" << b << std::endl;
    }

    All_arithmetic operator+(All_arithmetic &add)
    {
        All_arithmetic new_add;
        new_add.x = x + add.x;
        new_add.y = y + add.y;

        return new_add;
    }

    All_arithmetic operator-(All_arithmetic &sub)
    {
        All_arithmetic new_sub;
        new_sub.x = x - sub.x;
        new_sub.y = y - sub.y;
        return new_sub;
    }
    All_arithmetic operator*(All_arithmetic &mult)
    {
        All_arithmetic new_mult;
        new_mult.x = x * mult.x;
        new_mult.y = y * mult.y;
        return new_mult;
    }

    All_arithmetic operator/(All_arithmetic &div)
    {
        All_arithmetic new_div;
        new_div.x = x / div.x;
        new_div.y = y / div.y;
        return new_div;
    }

    All_arithmetic operator%(All_arithmetic &mod)
    {
        All_arithmetic new_mod;
        new_mod.x = x % mod.x;
        new_mod.y = y % mod.y;
        return new_mod;
    }

    void print()
    {
        std::cout << x << "\t" << y << "\n\n";
    }
};

int main()
{
    All_arithmetic a, b, c;

    a.input(54, 43);
    b.input(25, 23);

    c = a + b;
    std::cout << "Addition = ";
    c.print();

    c = a - b;
    std::cout << "Subtraction = ";
    c.print();

    c = a * b;
    std::cout << "Multiplication = ";
    c.print();

    c = a / b;
    std::cout << "Division = ";
    c.print();

    c = a % b;
    std::cout << "Module = ";
    c.print();
    return 0;
}