// Find the quadrant in which the coordinate point lies
#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter the number of n1 and n2 : ";
    cin >> n1 >> n2;

    if (n1 > 0 && n2 > 0)
    {
        cout << "The quadrant point lies in the first quadrant : " << n1 << " " << n2;
    }
    else if (n1 < 0 && n2 > 0)
    {
        cout << "The quadrant point lies in the second quadrant : " << n1 << " " << n2;
    }
    else if (n1 > 0 && n2 < 0)
    {
        cout << "The quadrant point lies in the third quadrant : " << n1 << " " << n2;
    }
    else if (n1 == 0 && n2 == 0)
    {
        cout << "The quadrant point lies in the origin : " << n1 << " " << n2;
    }
    else
    {
        cout << "Not quadrant point lies ";
    }
    return 0;
}