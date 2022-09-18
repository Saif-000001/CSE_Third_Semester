#include <iostream>

class User
{
    static int user_count;
    std::string status = "Gold";

public:
    std::string first_name;
    std::string last_name;

    static int get_user_count()
    {
        return user_count;
    }
    std::string get_status()
    {
        return status;
    }
    // constructors
    User()
    {
        // std::cout << "This is constructor ! " << std::endl;
        user_count++;
    }

    User(std::string first_name, std::string last_name, std::string status)
    {
        this->first_name = first_name;
        this->last_name = last_name;
        this->status = status;
        user_count++;
    }

    // Destructors
    ~User()
    {
        // std::cout << "Destructors" << std::endl;
        user_count--;
    }
};

int User::user_count = 0;

int main()
{
    User user, user1, user2, user3, user4;
    std::cout << User::get_user_count() << std::endl;

    user.~User();
    std::cout << User::get_user_count() << std::endl;

    return 0;
}
