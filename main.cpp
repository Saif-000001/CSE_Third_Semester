
#include <iostream>

// Class
class Employee
{
public:
    std::string Name;              //  member data
    void setName(std::string name) // Member Functions or method
    {
        Name = name;
    }
    std::string getName();
};
std::string Employee::getName()
{
    return Name;
}

int main()
{
    // Declare an object of class Employee
    Employee employee;
    employee.setName("MSI");
    std::cout << employee.getName();
    return 0;
}
