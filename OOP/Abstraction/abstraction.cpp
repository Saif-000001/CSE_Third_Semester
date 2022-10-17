
// if be virtual function, that is called abstraction

#include <iostream>

class MobilUser
{
public:
    // not virtual function
    void call()
    {
        std::cout << "Hello " << std::endl;
    }
    // pure virtual function
    virtual void sendMassage() = 0;
};

class Rohim : public MobilUser
{
public:
    void sendMassage()
    {
        std::cout << "Hi, this is Rohim " << std::endl;
    }
};

class Korim : public MobilUser
{
public:
    void sendMassage()
    {
        std::cout << "Hi, this is korim " << std::endl;
    }
};

int main()
{
    // MobilUser m; // object can not support
    MobilUser *m;
    Rohim r;
    Korim k;
    m = &r;
    m->call();
    m->sendMassage();

    m = &k;
    m->call();
    m->sendMassage();
}