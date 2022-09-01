#include <iostream>

int main()
{
    std::string st = "Emon";
    int choice;
    std::cout << "Enter your choice : ";
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        std::cout << "Insert : " << st << std::endl;
    case 2:
        st.pop_back();
        std::cout
            << "After undo : " << st << std::endl;
    case 3:
        st.push_back('n');
        std::cout << "After redo : " << st << std::endl;
        break;
    default:
        std::cout << "Nothing";
        break;
    }
}