// Algorithm
// step - 1 : input the string element
// step - 2: set i to 1
// step - 3: if str[i]=='\0' then go to step - 9
// step - 4: if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
// print alp++
// step - 5: else if (str[i] >= '0' && str[i] <= '9')
// print digit++
// step - 6: else(spacial character) print spc++
// step - 7: i to i + 1 then go to step - 2
// step - 8: print alp, digit, spc
// step - 9 : exit

#include <iostream>

void countTotalNumber(std::string str);

int main()
{
    std::string str;

    std::cout << "\nCount total number of alphabets, digits and special characters :- \n";
    std::cout << "Input the string : ";
    std::cin >> str;
    countTotalNumber(str);
    return 0;
}

void countTotalNumber(std::string str)
{
    int alp, digit, spc, i;
    alp = digit = spc = i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
        {
            alp++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else
        {
            spc++;
        }

        i++;
    }
    std::cout << "Number of Alphabets in the string is : "
              << alp << std::endl;
    std::cout << "Number of Digits in the string is : "
              << digit << std::endl;

    std::cout << "Number of Special characters in the string is : "
              << spc << std::endl;
}