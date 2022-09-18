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

int main()
{
    User use;
    use.set_status("Silver");
    std::cout << use.get_status() << std::endl;
}