// leap year
#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter the number of year : ";
    cin >> year;

    if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
    {
        cout << "Leap year " << year;
    }
    else
    {
        cout << "Not leap year ! " << year;
    }
    return 0;
}