#include <iostream>
using namespace std;

int largestValue(int a, int b, int c);

int main()
{
    cout << largestValue(9, 18, 24);
    return 0;
}

int largestValue(int a, int b, int c)
{
    if (a > b)
    {
        return a;
    }
    else if (b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}