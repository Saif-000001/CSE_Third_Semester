#include <iostream>
#include <numeric>
#include <vector>

class Person
{
protected:
    std::string first_Name;
    std::string last_Name;
    int id;

public:
    Person(std::string f_Name, std::string l_Name, int id)
    {
        this->first_Name = f_Name;
        this->last_Name = l_Name;
        this->id = id;
    }

    void display()
    {
        std::cout << "Name: " << last_Name << ", " << first_Name << std::endl;
        std::cout << "ID: " << id << std::endl;
    }
};

class Student : public Person
{
private:
    std::vector<int> testScore;

public:
    Student(std::string first_Name, std::string last_Name, int id, std::vector<int> score) : Person(first_Name, last_Name, id)
    {
        this->testScore = score;
    }

    char calculate()
    {
        int avg = std::accumulate(testScore.begin(), testScore.end(), 0.0) / testScore.size();
        // int sum = 0;
        // for (int i = 0; i < testScore.size(); i++)
        // {
        //     sum += testScore[i];
        // }
        // int avg = sum / testScore.size();

        if (90 <= avg)
        {
            return 'O';
        }
        else if (80 <= avg)
        {
            return 'E';
        }
        else if (70 <= avg)
        {
            return 'A';
        }
        else if (55 <= avg)
        {
            return 'P';
        }
        else if (40 <= avg)
        {
            return 'D';
        }
        else
        {
            return 'T';
        }
    }
};

int main()
{
    std::string first_name;
    std::string last_name;
    int id;

    int size;
    std::cin >> first_name >> last_name >> id >> size;
    std::vector<int> testScore;
    for (int i = 0; i < size; i++)
    {
        int ip;
        std::cin >> ip;
        testScore.push_back(ip);
    }

    // Student S(first_name, last_name, id, testScore);
    // S.display();
    // std::cout<<S.calculate()<<std::endl;

    Student *S = new Student(first_name, last_name, id, testScore);
    S->display();
    std::cout << "Grad: " << S->calculate() << std::endl;
    return 0;
}