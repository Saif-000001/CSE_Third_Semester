#include <iostream>
#include <iomanip>
// #include <limits>

int main()
{
    // first declaration
    int i = 4;
    double d = 4.0;
    std::string s = "HackerRank";

    // Second declaration
    int i1;
    double d1;
    std::string s1;
    std::cin >> i1 >> d1;
    std::getline(std::cin >> s1, s1);

    // sum
    std::cout << i + i1 << std::endl;
    std::cout << std::fixed << std::setprecision(1) << d + d1 << std::endl;
    std::cout << s + s1 << std::endl;
    return 0;
}