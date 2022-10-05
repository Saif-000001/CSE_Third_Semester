// Palindrome program
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, rev;
    cout << "Enter the number of N : ";
    cin >> n;
    int temp = n;
    while (n > 0)
    {
        rev = n % 10;
        sum = (sum * 10) + rev;
        n = n / 10;
    }

    if (temp == sum)
    {
        cout << "Number is palindrome : " << sum;
    }
    else
    {
        cout << "Number is not palindrome " << sum;
    }
    return 0;
}