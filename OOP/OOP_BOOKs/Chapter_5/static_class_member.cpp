#include <iostream>

class Static
{
    static int count;
    int number;

public:
    void getData(int a)
    {
        number = a;
        count++;
    }
    void getCount()
    {
        std::cout << "Count : " << count << "\n";
    }
};

int Static::count;

int main()
{
    Static a, b, c;
    a.getCount();
    b.getCount();
    c.getCount();

    a.getData(100);
    b.getData(200);
    c.getData(300);

    a.getCount();
    b.getCount();
    c.getCount();
    return 0;
}