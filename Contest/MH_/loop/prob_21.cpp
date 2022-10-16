#include <iostream>

int main()
{
    std::string s;
    std::getline(std::cin, s);

    std::cout << "Following the number : " << std::endl;
    std::cout << "01. encrypt " << std::endl;
    std::cout << "02. decrypt " << std::endl;

    int select;
    std::cin >> select;

    switch (select)
    {
    case 1:
        for (int i = 0; (i < 100 && s.size()); i++)
        {
            s[i] = s[i] + 2;
        }
        std::cout << "Encrypt : " << s << std::endl;
        break;
    case 2:
        for (int i = 0; (i < 100 && s.size()); i++)
        {
            s[i] = s[i] - 2;
        }
        std::cout << "Decrypt : " << s << std::endl;
        break;
    default:
        std::cout << "Nothing" << std::endl;
    }

    return 0;
}