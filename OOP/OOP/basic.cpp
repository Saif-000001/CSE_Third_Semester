#include <iostream>
using namespace std;

class Employee
{
public:
    string Name;
    string company;
    int age;

    void introYourSelf()
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << company << endl;
        cout << "Age - " << age << endl;
    }
};

int main()
{
    Employee employee1;
    employee1.Name = "MSI";
    employee1.company = "MSI Ltd";
    employee1.age = 22;
    employee1.introYourSelf();

    cout << " " << endl;

    Employee employee2;
    employee2.Name = "SI";
    employee2.company = "MSI Ltd";
    employee2.age = 23;
    employee2.introYourSelf();
}