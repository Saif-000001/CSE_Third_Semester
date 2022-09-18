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

    friend void output_status(User user);
    friend std::ostream &operator<<(std::ostream &output, const User user);
    friend std::istream &operator>>(std::istream &input, User &user);
};

int User::user_count = 0;

void output_status(User user)
{
    std::cout << user.status << std::endl;
}

std::ostream &operator<<(std::ostream &output, const User user)
{
    output << " First name: " << user.first_name << "\n Last name: " << user.last_name << "\n Status: " << user.status << std::endl;
    return output;
}

std::istream &operator>>(std::istream &input, User &user)
{
    input >> user.first_name >> user.last_name >> user.status;
    return input;
}

int main()
{
    User user;
    output_status(user);

    std::cin >> user;

    // user.first_name = "Caleb";
    // user.last_name = "Curry";
    // user.set_status("Silver");

    std::cout << user << std::endl;
    return 0;
}