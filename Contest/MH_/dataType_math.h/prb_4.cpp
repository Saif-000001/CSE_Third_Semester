//  Find Circumference of Circle
// Circumference or Circle = 2 X PI X Radius

#include <iostream>
#define PI 3.1416
#include <math.h>
using namespace std;

int main()
{
    int r;
    cout << "Enter the number of radius : ";
    cin >> r;

    float circle = 2 * PI * r;

    cout << circle << endl;
    return 0;
}