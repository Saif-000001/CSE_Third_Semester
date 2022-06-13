#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the number of a, b, c : ";
    cin >> a >> b >> c;

    if (a > b)
    {
        cout << "Largest value a " << endl;
    }
    else if (b > c)
    {
        cout << "Largest value b " << endl;
    }
    else
    {
        cout << "Largest value c " << endl;
    }

    return 0;
}