#include <iostream>
#include <vector>

int main()
{
    std::string s, s1;
    std::vector<std::string> vec;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> s;
        vec.push_back(s);
    }

    for (int i = 0; i < n; i++)
    {
        s1 = vec[i];
        for (int i = 0; i < s1.size(); i++)
        {
            if (i % 2 == 0)
            {
                std::cout << s1[i];
            }
        }
        std::cout << " ";
        for (int i = 0; i < s1.size(); i++)
        {
            if (i % 2 == 1)
            {
                std::cout << s1[i];
            }
        }
        std::cout << std::endl;
    }
}