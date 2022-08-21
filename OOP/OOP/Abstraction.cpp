#include <iostream>
using namespace std;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee
{
private:
    string Name;
    string Company;
    int Age;

public:
    // constructor
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    // Abstraction
    void AskForPromotion()
    {
        if (Age >= 30)
        {
            cout << Name << " Got promoted ! " << endl;
        }
        else
        {
            cout << Name << ", Sorry NO Promotion for you !" << endl;
        }
    }
};

int main()
{
    Employee employee1 = Employee("MSI", "MSI Ltd", 23);
    Employee employee2 = Employee("MSI", "MSI Ltd", 35);

    employee1.AskForPromotion();
    employee2.AskForPromotion();
}