#include <iostream>
using namespace std;

float sum(float a, float b);
float sub(float a, float b);
float mult(float a, float b);
float div(float a, float b);

int main()
{
    int opr;
    int a, b;
    cout << "Enter the number of a : ";
    cin >> a;
    cout << "Enter the number of b : ";
    cin >> b;
    do
    {
        cout << "\n \nSelect any operation from the c++ calculate "
                "\n1 = Addition"
                "\n2 = Subtraction"
                "\n3 = Multiplication"
                "\n4 = division"
                "\n \n Make a choice ";
        cin >> opr;
        switch (opr)
        {
        case 1:
            cout << sum(a, b);
            break;
        case 2:
            cout << sub(a, b);
            break;
        case 3:
            cout << mult(a, b);
            break;
        case 4:
            cout << sum(a, b);
            break;

        default:
            cout << "Something is wrong";
            break;
        }
    } while (opr != 5);
    {
        return 0;
    }
}

float sum(float a, float b)
{
    return a + b;
}

float sub(float a, float b)
{
    return a - b;
}
float mult(float a, float b)
{
    return a * b;
}
float div(float a, float b)
{
    return a / b;
}