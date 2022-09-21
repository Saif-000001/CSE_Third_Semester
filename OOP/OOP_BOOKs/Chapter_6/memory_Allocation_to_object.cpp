#include <iostream>

class Test
{
    int *a;

public:
    Test(int size)
    {
        a = new int[size];
        std::cout << size << std::endl;
    }
    ~Test()
    {
        delete a;
        std::cout << "Memory allocated for integer array ";
    }
};

int main()
{
    int s;
    std::cout << "Enter the size of the array : ";
    std::cin >> s;

    Test T(s);
}