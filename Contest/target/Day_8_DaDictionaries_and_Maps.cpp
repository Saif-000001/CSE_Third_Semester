#include <iostream>
#include <map>

int main()
{
    std::map<std::string, std::string> phoneBook;

    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::string phone;
        std::string book;
        std::cin >> phone;
        std::cin >> book;

        phoneBook[phone] = book;
    }

    std::map<std::string, std::string>::iterator it;
    std::string query;

    while (std::cin >> query)
    {

        it = phoneBook.find(query);
        if (it != phoneBook.end())
        {
            std::cout << it->first << " - " << it->second << std::endl;
        }
        else
        {
            std::cout << "Not found " << std::endl;
        }
    }
    return 0;
}