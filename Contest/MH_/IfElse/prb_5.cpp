// Determine the larger of the three numbers
#include <iostream>
using namespace std;

int main()
{
    float n1, n2, n3;
    cout << "Enter the three number of n1 and n2 and n3 : ";
    cin >> n1 >> n2 >> n3;

    if (n1 > n2 && n1 > n3)
    {
        cout << "The largest value n1 : " << n1 << endl;
    }
    if (n2 > n1 && n2 > n3)
    {
        cout << "The largest value n2 : " << n2 << endl;
    }
    if (n3 > n1 && n3 > n2)
    {
        cout << "The largest value n3 : " << n3 << endl;
    }
    return 0;
}