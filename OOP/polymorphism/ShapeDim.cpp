#include <iostream>

class Shape
{

public:
    double dim1, dim2;
    Shape(double heigh, double width)
    {
        this->dim1 = heigh;
        this->dim2 = width;
    }
    double area()
    {
        double area = (dim1 * dim2) / 2;
        return area;
    }
};

class Triangle : public Shape
{
    // double dim1, dim2;

public:
    Triangle(double heigh, double width) : Shape(dim1, dim2)
    {
        this->dim1 = heigh;
        this->dim2 = width;
    }
    double area()
    {
        double area = (dim1 * dim2) / 2;
        return area;
    }
};

class Rectangle : public Shape
{
    // double dim1, dim2;

public:
    Rectangle(double heigh, double width) : Shape(dim1, dim2)
    {
        this->dim1 = heigh;
        this->dim2 = width;
    }

    double area()
    {
        double area = (dim1 * dim2) / 2;
        return area;
    }
};

int main()
{
    Shape *S;
    // Shape S(15, 5);
    Triangle T(7, 3);
    Rectangle R(9, 3);

    S = &T;
    std::cout << "Triangle = " << S->area() << std::endl;

    S = &R;
    std::cout << "Rectangle = " << S->area() << std::endl;

    // Shape s(7, 5);
    // std::cout << s.area() << std::endl;

    // Triangle t(8, 5);
    // std::cout << t.area() << std::endl;

    // Rectangle r(9, 2);
    // std::cout << r.area() << std::endl;
}