#include <iostream>
using namespace std;

float addition(float a, float b);
float subtraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);

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
            cout << addition(a, b);
            break;
        case 2:
            cout << subtraction(a, b);
            break;
        case 3:
            cout << multiplication(a, b);
            break;
        case 4:
            cout << division(a, b);
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

float addition(float a, float b)
{
    return a + b;
}

float subtraction(float a, float b)
{
    return a - b;
}
float multiplication(float a, float b)
{
    return a * b;
}
float division(float a, float b)
{
    return a / b;
}