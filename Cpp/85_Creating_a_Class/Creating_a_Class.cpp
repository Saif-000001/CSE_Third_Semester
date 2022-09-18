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
};

int add_user_if_not_exists(std::vector<User> &users, User user)
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
    User me;
    me.first_name = "Caleb";
    me.last_name = "Curry";
    // me.status = "Gold";
    // std::cout << "First name : " << me.first_name << std::endl;
    // std::cout << "Last name : " << me.last_name << std::endl;
    // std::cout << "Status : " << me.get_status() << std::endl;

    // working with object
    // std::vector<User> users;
    // users.push_back(me);
    // users.push_back(User());
    // std::cout<< users[0].first_name << std::endl;

    std::vector<User> users;
    User user1, user2, user3;
    user1.first_name = "sally";
    user1.last_name = "swn";

    user2.first_name = "Jake";
    user2.last_name = "Jan";

    user3.first_name = "Caleb";
    user3.last_name = "Curry";

    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);

    User user;
    user.first_name = "jek";
    user.last_name = "tom";

    std::cout << add_user_if_not_exists(users, user) << std::endl;
    std::cout << users.size() << std::endl;

    return 0;
}
