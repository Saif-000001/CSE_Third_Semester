#include <iostream>
using namespace std;

int fibonacci(int n);

int main()
{
    int m, n = 0, i;
    cout << "Enter the number : " << endl;
    cin >> m;

    cout << "Fibonacci series terms are : ";
    for (i = 1; i <= m; i++)
    {
        cout << fibonacci(n) << " ";
        n++;
    }
}

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}