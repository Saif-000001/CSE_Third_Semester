#include <iostream>

class Friend_Class
{
    int id;
    std::string s;

public:
    friend class Friend;
};

class Friend
{
public:
    void display(Friend_Class ob)
    {
        std::cin >> ob.id;
        std::cout << ob.id << std::endl;

        std::cin >> ob.s;
        std::cout << ob.s << std::endl;
    }
};

int main()
{
    Friend_Class Fc;
    Friend F;
    F.display(Fc);

    return 0;
}