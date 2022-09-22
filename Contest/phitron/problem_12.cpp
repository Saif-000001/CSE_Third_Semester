#include <iostream>

int main()
{
    int n, years, months, day;
    std::cout << "Enter the number : ";
    std::cin >> n;

    years = n / 365;
    months = (n - years * 365) / 30;
    day = n - years * 365 - months * 30;
    std::cout << "\nYears : Months : Day = " << years << " : " << months << " : " << day << std::endl;
    return 0;
}