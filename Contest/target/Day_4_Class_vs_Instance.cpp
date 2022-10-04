#include <iostream>

class Person
{
public:
    int age;

    Person(int initialAge);

    void amIOld();

    void yearAge();
};

Person::Person(int initialAge)
{
    // Add some more code to run some checks on initialAge
    if (initialAge > 0)
        age = initialAge;
    else
    {
        std::cout << "Age is not valid, setting age to 0." << std::endl;
        age = 0;
    }
}

void Person::amIOld()
{
    // Do some computations in here and print out the correct statement to the console
    if (age < 13)
    {
        std::cout << "You are young." << std::endl;
    }
    else if (age < 18)
    {
        std::cout << "You are a teenager." << std::endl;
    }
    else
    {
        std::cout << "You are old." << std::endl;
    }
}

void Person::yearAge()
{
    // Increment the age of the person in here
    age++;
}

int main()
{
    int n;
    int age;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> age;
        Person p(age);
        p.amIOld();
        for (int j = 0; j < n - 1; j++)
        {
            p.yearAge();
        }
        p.amIOld();
        std::cout << std::endl;
    }

    return 0;
}