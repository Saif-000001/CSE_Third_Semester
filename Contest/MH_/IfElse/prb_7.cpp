// 1068. Sum
#include <iostream>
using namespace std;

int main()
{
    int n, i, sum = 0;
    cout << "Enter the number of N : ";
    cin >> n;
    if (n <= 0)
    {
        for (i = n; i <= 1; i++)
        {
            sum += i;
        }
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            sum += i;
        }
    }
    cout << "the sum : " << sum;
    return 0;
}