// step - 1 : Read number n
// step - 2 : if n<=1  then return 1
// step - 3 : return n*factorial(n-1)
// step - 5 : exit

#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << "Factorial = " << factorial(n) << endl;
    return 0;
}
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}