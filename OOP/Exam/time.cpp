#include <iostream>

using namespace std;

class Time
{
    int hours;
    int minute;

public:
    void getTime()
    {
        cin >> hours;
        cin >> minute;
    }

    void display()
    {
        cout << hours << " hours : " << minute << " minute" << endl;
    }

    void sum(Time, Time);
};

void Time::sum(Time T1, Time T2)
{
    minute = T1.minute + T2.minute;
    hours = minute / 60;
    minute = minute % 60;
    hours = hours + T1.hours + T2.hours;
}

int main()
{
    Time t1, t2, t3;
    t1.getTime();
    t2.getTime();
    t3.sum(t1, t2);
    t3.display();
    return 0;
}