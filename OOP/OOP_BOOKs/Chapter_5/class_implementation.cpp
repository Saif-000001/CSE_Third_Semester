#include <iostream>

class Item
{
    // private by default
    int number;
    float cost;

public:
    // prototype declaration to be defined
    void get_data(int a, float b);

    // Function defined inside class
    void put_data()
    {
        std::cout << "Number : " << number << std::endl;
        std::cout << "Cost : " << cost << std::endl;
    }
};

// Member Function Definition
void Item ::get_data(int a, float b) // use membership label
{
    // private variables directly used
    number = a;
    cost = b;
}

int main()
{
    Item x;

    std::cout << "\nObject x "
              << "\n";
    x.get_data(100, 299.50);
    x.put_data();

    return 0;
}