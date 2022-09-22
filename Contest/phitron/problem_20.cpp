#include <iostream>

int main()
{
    std::string name;
    std::cout << "Enter character : ";
    std::cin >> name;
    if (name == "vertebrado")
    {

        std::cin >> name;
        if (name == "ave")
        {
            std::cin >> name;
            if (name == "carnivoro")
            {
                std::cout << "aguia" << std::endl;
            }
            else if (name == "anivora")
            {
                std::cout << "pomba";
            }
        }
        else if (name == "mamifero")
        {
            std::cin >> name;
            if (name == "onivoro")
            {
                std::cout << "homen" << std::endl;
            }
            else if (name == "herbivoro")
            {
                std::cout << "vaca";
            }
        }
    }
    else if (name == "invertebrado")
    {
        std::cout << "Enter character : ";
        std::cin >> name;
        if (name == "inseto")
        {
            std::cin >> name;
            if (name == "hematofago")
            {
                std::cout << "pulga" << std::endl;
            }
            else if (name == "herbivoro")
            {
                std::cout << "lagarta";
            }
        }
        else if (name == "anelideo")
        {
            std::cin >> name;
            if (name == "hemotofago")
            {
                std::cout << "sanguessuga" << std::endl;
            }
            else if (name == "onivoro")
            {
                std::cout << "minhoca";
            }
        }
    }

    return 0;
}