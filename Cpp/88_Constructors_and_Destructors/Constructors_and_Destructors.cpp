#include <iostream>
#include <vector>

class User
{
    std::string status = "Gold";

public:
    std::string first_name;
    std::string last_name;
    std::string get_status()
    {
        return status;
    }
    // constructors
    User()
    {
        std::cout << "This is constructor ! " << std::endl;
    }

    User(std::string first_name, std::string last_name, std::string status)
    {
        this->first_name = first_name;
        this->last_name = last_name;
        this->status = status;
    }

    // Destructors
    ~User()
    {
        std::cout << "Destructors" << std::endl;
    }
};

int add_user_if_not_exists(std::vector<User> users, User user)
{
    for (int i = 0; i < users.size(); i++)
    {
        if (users[0].first_name == user.first_name && users[0].last_name == user.last_name)
        {
            return i;
        }
    }
    users.push_back(user);
    return users.size() - 1;
}

int main()
{
    User me("Caleb", "Curry", "Silver");
    std::cout << me.first_name << "\t" << me.last_name << "\t" << me.get_status() << std::endl;
    std::vector<User> users;
    User user1, user2, user3;
    user1.first_name = "jas";
    user1.last_name = "pas";

    user2.first_name = "jaa";
    user2.last_name = "kaa";

    user3.first_name = "nas";
    user3.last_name = "jam";

    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);

    User user;
    user.first_name = "jase";
    user.last_name = "pass";

    std::cout << add_user_if_not_exists(users, user) << std::endl;
}