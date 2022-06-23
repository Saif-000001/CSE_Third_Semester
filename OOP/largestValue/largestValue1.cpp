// Problems - 1

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the number of a, b, c : ";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << "Largest value a " << endl;
    }
    else if (b > c && b > a)
    {
        cout << "Largest value b " << endl;
    }
    else if (c > a && c > b)
    {
        cout << "Largest value c " << endl;
    }
    else
    {
        cout << "Value is nothing " << endl;
    }

    return 0;
}