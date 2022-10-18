#include <iostream>
class Solution
{
public:
    std::string stack;
    std::string queue;

    void pushCharacter(char c)
    {
        stack += c;
    }

    void enqueueCharacter(char c)
    {
        queue += c;
    }

    char popCharacter()
    {
        char pop = stack.back();
        stack = stack.substr(0, stack.length() - 1);
        return pop;
    }

    char dequeueCharacter()
    {
        char pop = stack.front();
        stack = stack.substr(1, stack.length());
        return pop;
    }
};

int main()
{
    std::string s;
    std::getline(std::cin, s);

    Solution obj;

    for (int i = 0; i < s.length(); i++)
    {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    for (int i = 0; i < s.length() / 2; i++)
    {
        if (obj.popCharacter() != obj.dequeueCharacter())
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        std::cout << "The word, " << s << ", is a palindrome.";
    }
    else
    {
        std::cout << "The word, " << s << ", not is a palindrome.";
    }
}