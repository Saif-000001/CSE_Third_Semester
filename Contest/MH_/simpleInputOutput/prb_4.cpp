#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the number of a and b : ";
    cin >> a >> b;
    int sum = a + b - 1;
    cout << "two gangStars : " << sum - a << " " << sum - b << endl;
    return 0;
}