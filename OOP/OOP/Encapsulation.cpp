#include <iostream>
using namespace std;

class Employee
{
private:
    string Name;
    string Company;
    int Age;

public:
    // Encapsulation
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }

    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        if (age >= 18)
        {
            Age = age;
        }
    }
    int getAge()
    {
        return Age;
    }
};

int main()
{
    Employee employee1;
    employee1.setName("MSI");
    employee1.setCompany("MSI Ltd");
    employee1.setAge(22);
    cout << employee1.getName() << " is " << employee1.getCompany() << " and " << employee1.getAge();
}