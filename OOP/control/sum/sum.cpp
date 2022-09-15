#include <iostream>
#include <cmath>

double series(int n)
{
    double sum = 0.0, ser;
    for (int i = 1; i <= n; i++)
    {
        ser = 1 / pow(i, i);
        sum += ser;
    }
    return sum;
}

int main()
{
    int n;
    std::cout << "Enter the last number : ";
    std::cin >> n;
    double ser = series(n);
    std::cout << "The sum of the series is : " << ser << std::endl;
}

// C++ program to calculate the following series
// #include <iostream>
// #include <cmath>
// using namespace std;

// // Function to calculate the following series
// double Series(int n)
// {
//     int i;
//     double sums = 0.0, ser;
//     for (i = 1; i <= n; ++i)
//     {
//         ser = 1 / pow(i, i);
//         sums += ser;
//     }
//     return sums;
// }

// // Driver Code
// int main()
// {
//     int n = 5;
//     double res = Series(n);

//     cout << res;
//     return 0;
// }