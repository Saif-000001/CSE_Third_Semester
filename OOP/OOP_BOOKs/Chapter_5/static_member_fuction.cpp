#include <iostream>

class Test
{
    int code;
    static int count;

public:
    void setCode()
    {
        code = ++count;
    }

    void showCode()
    {
        std::cout << "Object number : " << code << "\n";
    }
    static void showCount()
    {
        std::cout << "Count : " << count << "\n";
    }
};

// int Test::showCount();
int Test::count;

int main()
{
    Test t1, t2, t3;

    t1.setCode();
    t2.setCode();
    t3.setCode();

    Test::showCount();
    Test t4;
    t4.setCode();

    Test::showCount();
    t1.showCode();
    t2.showCode();
    t3.showCode();
    t4.showCode();

    return 0;
}