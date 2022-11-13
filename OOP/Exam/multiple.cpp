#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "First base " << endl;
    }
};

class B
{
public:
    B()
    {
        cout << "Second base " << endl;
    }
};

class C : public A, public B
{
public:
    C()
    {
        cout << "Derived base " << endl;
    }
};

int main()
{
    C obj;
    return 0;
}