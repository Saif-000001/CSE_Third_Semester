#include <iostream>
// using namespace std;
void elsIf(int age);
int main()
{
    int age;
    std::cout << "Enter your age : ";
    std::cin >> age;
    if (age > 18)
    {
        std::cout << "Adult man " << std::endl;
    }
    else if (age <= 18 && age >= 13)
    {
        std::cout << "adolescence man" << std::endl;
    }
    else
    {
        std::cout << "childhood man" << std::endl;
    }
    return 0;
}