// #include <iostream>
#include <string>
#ifndef USER_H
#define USER_H
class User
{
    static int user_count;
    std::string status = "Gold";

public:
    static int get_user_count();
    std::string first_name;
    std::string last_name;

    // Encapsulate
    // Getters
    std::string get_status();

    // setters
    void set_status(std::string status);

    // constructors
    User();

    User(std::string first_name, std::string last_name, std::string status);

    // Destructors
    ~User();

    friend void output_status(User user);
    friend std::ostream &operator<<(std::ostream &output, const User user);
    friend std::istream &operator>>(std::istream &input, User &user);
};

#endif