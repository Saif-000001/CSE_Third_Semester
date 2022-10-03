#include <iostream>

int main()
{
    std::string s;
    std::string t;
    std::cout << "Binary number : ";
    std::cin >> s >> t;

    std::string res = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t[i])
        {
            res += '1';
        }
        else
        {
            res += '0';
        }
    }
    std::cout << res << std::endl;
    return 0;
}