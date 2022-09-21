#include <iostream>

class Fixed_deposit
{
    long int p_amount;
    int years;
    float rate;
    float R_value;

public:
    Fixed_deposit()
    {
    }
    Fixed_deposit(long int p, int y, float r = 0.12);
    Fixed_deposit(long int p, int y, int r);
    void display();
};

Fixed_deposit::Fixed_deposit(long int p, int y, float r)
{
    p_amount = p;
    years = y;
    rate = r;
    R_value = p_amount;
    for (int i = 1; i <= y; i++)
    {
        R_value *= (1.0 + r);
    }
}

Fixed_deposit::Fixed_deposit(long int p, int y, int r)
{
    p_amount = p;
    years = y;
    rate = r;
    R_value = p_amount;
    for (int i = 1; i <= y; i++)
    {
        R_value *= (1.0 + float(r) / 100);
    }
}

void Fixed_deposit::display()
{
    std::cout << "\n"
              << "Principle Amount = " << p_amount << "\n";
    std::cout << "\n"
              << "Return value = " << R_value << "\n";
}

int main()
{
    Fixed_deposit FD1, FD2, FD3;
    long int p;
    int y;
    float r;
    int R;

    std::cout << "Enter amount , period, interest rate (in percent) "
              << "\n";
    std::cin >> p >> y >> R;
    FD1 = Fixed_deposit(p, y, R);

    std::cout << "Enter amount , period, interest rate (decimal form) "
              << "\n";
    std::cin >> p >> y >> r;
    FD2 = Fixed_deposit(p, y, r);

    std::cout << "Enter amount and period "
              << "\n";
    std::cin >> p >> y;
    FD3 = Fixed_deposit(p, y);

    std::cout << "\nDeposit 1";
    FD1.display();

    std::cout << "\nDeposit 2";
    FD2.display();

    std::cout << "\nDeposit 3";
    FD3.display();

    return 0;
}