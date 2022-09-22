#include <iostream>

int main()
{
    double A, B, C, MEDIA;

    std::cout << "Enter numbers : ";
    std::cin >> A >> B >> C;

    MEDIA = ((A * 2.0) + (B * 3.0) + (C * 5.0)) / 10.0;
    std::cout << "MEDIA = " << MEDIA << std::endl;
    return 0;
}