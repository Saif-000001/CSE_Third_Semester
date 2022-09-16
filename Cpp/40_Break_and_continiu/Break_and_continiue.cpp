#include <iostream>

int main()
{
    std::string sentence = "Hello my name is Caleb";
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == ' ')
        {
            continue;
        }
        std::cout << sentence[i] << std::endl;
        // if (sentence[i] == 'o')
        // {
        //     std::cout << "Found O \n";
        //     break;
        // }
    }
    std::cout << "Done !";
    return 0;
}