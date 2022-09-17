#include <iostream>
#include "math_utils.h"

int main()
{
    std::cout << "Pow = " << pow(3, 3) << std::endl;
    std::cout << "Pow = " << pow(3) << std::endl;
    Rectangle rectangle;
    rectangle.length = 12;
    rectangle.width = 13;
    int are = area(rectangle.length, rectangle.width);
    std::cout << "Area = " << are << std::endl;
    std::cout << "Area = " << area(rectangle.length) << std::endl;
    std::cout << "Area = " << area(rectangle) << std::endl;

    return 0;
}
