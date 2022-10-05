// How to check if 3 sides form a triangle
// a + b > c
// a + c > b
// b + c > a

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the number of a , b and c : ";
    cin >> a >> b >> c;
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        cout << "The sides from a not triangle " << endl;
    }
    else
    {
        cout << "The sides from a triangle " << endl;
    }
    return 0;
}