#include <iostream>
using namespace std;

class Complex
{

    int real;
    int image;

public:
    void getData()
    {
        cin >> real;
        cin >> image;
    }

    void sum(Complex &c1, Complex &c2)
    {
        real = c1.real + c2.real;
        image = c1.image + c2.image;
    }

    void display()
    {
        cout << real << " + " << image << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "First complex number : ";
    c1.getData();
    cout << "\nSecond complex number : ";
    c2.getData();

    cout << "Sum of two complex number : ";
    c3.sum(c1, c2);
    c3.display();
}