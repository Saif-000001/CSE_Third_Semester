// problems - 2
#include <iostream>
using namespace std;

void largestValue(void);

int main()
{
    largestValue();
    return 0;
}

void largestValue(void)
{
    int a, b, c;
    cout << "Enter the number a , b, c : ";
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
}