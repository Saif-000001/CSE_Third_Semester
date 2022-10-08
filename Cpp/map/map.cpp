#include <iostream>
// #include <unordered_map>
#include <map>

//  map -> ascending order or alphabetically
int main()
{
    // std::unordered_map<std::string, std::string> myDictionary;
    std::map<std::string, std::string> myDictionary;

    myDictionary.insert(std::pair<std::string, std::string>("Apple", "banana"));
    myDictionary.insert(std::pair<std::string, std::string>("orange", "lemon"));
    myDictionary.insert(std::pair<std::string, std::string>("graf", "banana"));
    myDictionary.insert(std::pair<std::string, std::string>("App", "banana"));

    myDictionary["Apple"] = "Banana";
    myDictionary.clear();
    std::cout << myDictionary.size() << std::endl;

    for (auto pair : myDictionary)

        std::cout
            << pair.first << " - " << pair.second << std::endl;
}