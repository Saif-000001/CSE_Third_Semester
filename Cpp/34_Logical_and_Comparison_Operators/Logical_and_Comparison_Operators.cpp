#include <iostream>

int main()
{
    std::string name_answer = "Claire";
    int age_answer = 63;

    std::string name_guess;
    std::cout << "Guess my name ! : ";
    std::cin >> name_guess;

    int age_guess;
    std::cout << "Guess my age ! : ";
    std::cin >> age_guess;

    // if (answer == guess && age_answer == age_guess)
    // {
    //     std::cout << "You got it right ! \n";
    // }

    // if (answer == guess || age_answer == age_guess)
    // {
    //     std::cout << "You got it right ! \n";
    // }

    // if ((name_answer != name_guess))
    // {
    //     std::cout << "You got it right ! \n";
    // }
    if ((name_answer == name_guess))
    {
        if (age_answer == age_guess)
        {
            std::cout << "You got it right ! \n";
        }
    }

    /*

    // logical operator
    // && || !

    // comparison
    // ==  !=  <  >  <=  >=

     */
    return 0;
}