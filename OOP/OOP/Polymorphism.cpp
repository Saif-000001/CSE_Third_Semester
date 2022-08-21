#include <iostream>
using namespace std;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};
class Employee
{
private:
    // string Name;
    string Company;
    int Age;

protected:
    string Name;

public:
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
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

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

    virtual void Work()
    {
        cout << Name << " is checking email , task backlog, performing task..." << endl;
    }
};

class Developer : public Employee
{
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage) : Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void FixBug()
    {
        cout << Name << " fixed bug using " << FavProgrammingLanguage << endl;
    }
    void Work()
    {
        cout << Name << " is Writing " << FavProgrammingLanguage << " code " << endl;
    }
};

class Teacher : public Employee
{
public:
    string Subject;
    void PrepareLesson()
    {
        cout << Name << " is preparing " << Subject << " lesson" << endl;
    }
    Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
    {
        Subject = subject;
    }
    void Work()
    {
        cout << Name << " is teaching " << Subject << endl;
    }
};

int main()
{
    Developer d = Developer("MSI", "MSI Ltd", 23, "c++");
    Teacher t = Teacher("SI", "MSI Ltd", 30, "OOP");
    // t.Work();
    // d.Work();

    Employee *e1 = &d;
    Employee *e2 = &t;

    e1->Work();
    e2->Work();
}