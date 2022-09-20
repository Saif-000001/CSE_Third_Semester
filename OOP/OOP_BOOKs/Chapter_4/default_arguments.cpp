#include <iostream>

float value(float p, int n, float r);
void print(char ch, int len);

int main()
{
    float amount;
    // float value(float p, int n, float r = 0.15);
    // void print(char ch = '*', int len = 40);

    print('*', 40);

    amount = value(5000.00, 5, 0.15);
    std::cout << "\nFinal value = " << amount << std::endl;

    amount = value(10000.00, 5, 0.30);
    std::cout << "\nFinal value = " << amount << std::endl;
    print('=', 40);

    return 0;
}

float value(float p, int n, float r)
{
    int year = 1;
    float sum = p;

    while (year <= n)
    {
        sum *= (1 + r);
        year += 1;
    }
    return (sum);
}

void print(char ch, int len)
{
    for (int i = 1; i <= len; i++)
    {
        std::cout << ch << " ";
    }
    std::cout << std::endl;
}