// Three number of largest value
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Three number of a , b , and c : ";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << "The largest value of a : " << endl;
    }
    else if (b > a && b > c)
    {
        cout << "The largest value of b : " << endl;
    }
    else if (c > a && c > b)
    {
        cout << "The largest value of c : " << endl;
    }
    else
    {
        cout << "Not value : " << endl;
    }
    return 0;
}