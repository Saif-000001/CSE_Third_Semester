#include <iostream>

int count = 0;
class Test
{
public:
    Test()
    {
        count++;
        std::cout << count << std::endl;
    }
    ~Test()
    {
        count--;
        std::cout << count << std::endl;
    }
};

int main()
{

    Test T, T1;
    {
        Test t1, t2;
    }

    return 0;
}