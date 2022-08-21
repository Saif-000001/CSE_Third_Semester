#include <iostream>
using namespace std;

class Employee
{
public:
    string Name;
    string Company;
    int Age;

    void introduceYourSelf()
    {
        cout << "Name -> " << Name << endl;
        cout << "Company -> " << Company << endl;
        cout << "Age -> " << Age << endl;
    }
    // constructors
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    Employee employee1 = Employee("MSI", "MSI Ltd", 22);
    employee1.introduceYourSelf();
    cout << endl;

    Employee employee2 = Employee("MS", "MSI Ltd", 23);
    employee2.introduceYourSelf();
    cout << endl;

    Employee employee3 = Employee("SI", "MSI Ltd", 24);
    employee3.introduceYourSelf();
}
