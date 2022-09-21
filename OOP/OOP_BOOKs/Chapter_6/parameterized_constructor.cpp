#include <iostream>

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display();
};

void Point ::display()
{
    std::cout << "Point = "
              << "(" << x << " , " << y << ")" << std::endl;
}

int main()
{
    Point c(10, 20);
    c.display();

    Point d(100, 200);
    d.display();
}