#include <iostream>
#include <conio.h>
#include <string>

class Binary
{
    std::string s;

public:
    void read()
    {
        std::cout << "Enter a binary number : ";
        std::cin >> s;
        // s = "110101";
    }
    void chk_bin()
    {
        for (int i = 0; i <= s.length(); i++)
        {
            if (s.at(i) != '0' && s.at(i) != '1')
            {
                std::cout << "\nIncorrect binary number format ";
                getch();
                exit(0);
            }
        }
    }

    void ones()
    {
        chk_bin();
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) == '0')
            {
                s.at(i) = '1';
            }
            else
            {
                s.at(i) = '0';
            }
        }
        std::cout << s << std::endl;
    }

    // void display_ones()
    // {
    //     ones();
    //     std::cout << "\nThe 1's complement of the above binary number is : " << s;
    // }
};

int main()
{
    Binary b;
    b.read();
    // b.display_ones();
    b.ones();

    getch();
    return 0;
}