// Program to calculate distance between two points
// Distance = sqrt{(x2-x1)^{2} + (y2-y1)^{2}}
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x1, x2, y1, y2;
    cout << "Enter the value of x1 , x2, y1 and y2 : ";
    cin >> x1 >> x2 >> y1 >> y2;
    float dis = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    cout << dis << endl;
    return 0;
}