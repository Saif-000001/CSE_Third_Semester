// function overriding Run time / dynamic or late binding
#include <iostream>

class Person
{
public:
    virtual void display()
    {
        std::cout << "I am a person " << std::endl;
    }
    // void display()
    // {
    //     std::cout << "I am a person " << std::endl;
    // }
};

class Teacher : public Person
{
public:
    void display()
    {
        std::cout << "I am a teacher " << std::endl;
    }
};

class Student : public Person
{
public:
    void display()
    {
        std::cout << "I am a student " << std::endl;
    }
};

int main()
{
    Person *p;
    // Person p;
    Teacher t;
    Student s;

    p = &t;
    p->display();

    // p.display();
    // t.display();
    // s.display();
}
