#include <iostream>

class User
{
    std::string status = "Gold";

public:
    std::string first_name;
    std::string last_name;
    // std::string status;

    // Encapsulate
    // Getters
    std::string get_status()
    {
        return status;
    }

    // setters
    void set_status(std::string status)
    {
        // this->status = status;
        if (status == "Gold" || status == "Silver" || status == "Bronze")
        {
            this->status = status;
        }
        else
        {
            this->status = "Not status";
        }
    }
};

std::ostream &operator<<(std::ostream &output, const User user)
{
    output << " First name: " << user.first_name << "\n Last name: " << user.last_name << std::endl;
    return output;
}

std::istream &operator>>(std::istream &input, User user)
{
    input >> user.first_name >> user.last_name;
    return input;
}

int main()
{
    // User user, user1, user2, user3, user4;
    // std::cout << User::get_user_count() << std::endl;

    // user.~User();
    // std::cout << User::get_user_count() << std::endl;

    User user;
    std::cin >> user;

    // user.first_name = "Caleb";
    // user.last_name = "Curry";
    // user.set_status("Silver");

    // std::cout << user << std::endl;

    return 0;
}