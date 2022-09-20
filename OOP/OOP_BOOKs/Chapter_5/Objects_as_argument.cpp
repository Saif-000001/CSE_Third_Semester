#include <iostream>

class Time
{
    int hours;
    int minutes;

public:
    void getData(int h, int m)
    {
        hours = h;
        minutes = m;
    }
    void putData()
    {
        std::cout << hours << " hours and " << minutes << " minutes \n";
    }

    void sum(Time, Time);
};

void Time::sum(Time t1, Time t2)
{
    minutes = t1.minutes + t2.minutes;
    hours = minutes / 60;
    minutes = minutes % 60;
    hours = hours + t1.hours + t2.hours;
}

int main()
{
    Time t1, t2, t3;

    t1.getData(2, 45);
    t2.getData(3, 30);

    t3.sum(t1, t2);

    t1.putData();
    t2.putData();
    t3.putData();
}