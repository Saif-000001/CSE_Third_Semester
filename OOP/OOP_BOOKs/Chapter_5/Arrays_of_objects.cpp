#include <iostream>

class Employee
{
    std::string name;
    int age;

public:
    void getData();
    void putData();
};

void Employee::getData()
{
    std::cout << "Enter name : ";
    std::cin >> name;
    std::cout << "Enter age : ";
    std::cin >> age;
}

void Employee::putData()
{
    std::cout << "Name : " << name << std::endl;
    std::cout << "Age : " << age << std::endl;
}

const int size = 3;

int main()
{
    Employee manager[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Details of manager " << i + 1 << "\n";
        manager[i].getData();
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << " Manager \n"
                  << i + 1 << "\n";
        manager[i].putData();
    }

    return 0;
}