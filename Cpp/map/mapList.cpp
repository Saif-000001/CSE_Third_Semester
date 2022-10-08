#include <iostream>
#include <map>
#include <list>

int main()
{
    std::map<std::string, std::list<std::string>> poke;

    std::list<std::string> pikachuAttacks{"thunder shock", "tail wipe", "quick attack"};
    std::list<std::string> charmaderAttacks{"flames thrower", "scary face"};
    std::list<std::string> chikoritaAttacks{"razor leaf", "poison powder"};

    poke.insert(std::pair<std::string, std::list<std::string>>("Pikachu", pikachuAttacks));
    poke.insert(std::pair<std::string, std::list<std::string>>("charmader", charmaderAttacks));
    poke.insert(std::pair<std::string, std::list<std::string>>("chikorita", chikoritaAttacks));

    for (auto pair : poke)
    {
        std::cout << pair.first << " - ";
        for (auto attack : pair.second)
        {
            std::cout << attack << " ";
        }
        std::cout << std::endl;
    }
}