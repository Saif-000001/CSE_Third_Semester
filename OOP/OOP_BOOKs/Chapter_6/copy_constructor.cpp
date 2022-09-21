#include <iostream>

class Code
{
    int id;

public:
    Code(int a)
    {
        id = a;
    }
    Code(Code &x)
    {
        id = x.id;
    }
    void display()
    {
        std::cout << "ID = " << id << std::endl;
    }
};

int main()
{
    Code A(100);
    Code B(A);
    Code C = A;

    // Code D;
    Code D = A;

    A.display();
    B.display();
    C.display();
    D.display();
}