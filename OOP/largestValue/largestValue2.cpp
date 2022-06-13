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

    if (a > b)
    {
        cout << "Largest value a ";
    }
    else if (b > c)
    {
        cout << "Largest value b ";
    }
    else
    {
        cout << "Largest value c ";
    }
}