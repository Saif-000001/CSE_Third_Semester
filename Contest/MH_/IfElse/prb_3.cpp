// i*(n-i+1)= 1 * n + 2 *(n-1)+...n*1

#include <iostream>
using namespace std;

int main()
{
    int n, result;
    cout << "Enter the number of N : ";
    cin >> n;

    result = 1 * n + 2 * (n - 1);
    if (result == 0)
    {
        cout << "Not result" << endl;
    }
    else
    {
        cout << "The result : " << result;
    }
    return 0;
}