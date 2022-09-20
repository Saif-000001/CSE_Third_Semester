#include <iostream>
#include <conio.h>

class Sample
{
private:
    int data1;
    char data2;

public:
    void set_data(int x, char y)
    {
        data1 = x;
        data2 = y;
    }
    void get_data()
    {
        std::cout << "Data1 = " << data1 << std::endl;
        std::cout << "Data2 = " << data2 << std::endl;
    }
};

int main()
{
    Sample *s_ptr = new Sample;

    s_ptr->set_data(45, 'A');
    s_ptr->get_data();

    delete s_ptr;

    return 0;
}