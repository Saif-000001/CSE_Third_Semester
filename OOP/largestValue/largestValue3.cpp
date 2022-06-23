// problems - 3
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
    if (a > b && a > c)
    {

        return a;
    }
    else if (b > c && b > a)
    {
        return b;
    }
    else if (c > a && c > b)
    {
        return c;
    }
    else
    {
        return 0;
    }
    return -1;
}