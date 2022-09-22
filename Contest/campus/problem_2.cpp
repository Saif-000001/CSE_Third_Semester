#include <iostream>
#define size 10

char top = -1, alphabets[size];
void insert(char alphabets[], char x, int n);
void redo(char x);
void undo();
void show();

int main()
{
    // char alphabet[100];
    // int n;
    // std::cout << "Enter the array size : ";
    // std::cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     std::cin >> alphabet[i];
    // }
    std::string st = {"emon"};
    st.push_back('a');

    std::cout << st << std::endl;
    st.pop_back();
    st.pop_back();
    std::cout << st << std::endl;

    // insert(alphabet, 'a', n);
    // redo(alphabet);
    // redo('a');
    // redo('b');
    // redo('c');

    // show();

    // undo();
    // undo();
    // undo();
}

void insert(char alphabets[], char x, int n)
{
    redo(x);
    std::cout << "Insert : ";
    for (int i = top; i < n; i++)
    {
        std::cout << alphabets[i];
    }
    std::cout << std::endl;
}

void redo(char x)
{

    if (top >= size - 1)
    {
        std::cout << "redo overflow " << std::endl;
        return;
    }
    top = top + 1;
    alphabets[top] = x;

    std::cout << "After redo : " << x << std::endl;
}

void undo()
{
    char x;
    if (top < 0)
    {
        std::cout << "undo underflow " << std::endl;
        return;
    }
    top = top - 1;
    x = alphabets[top];
    std::cout << "After undo : " << x << std::endl;
}

// void show()
// {
//     if (top == -1)
//     {
//         std::cout << "Underflow" << std::endl;
//     }
//     for (int i = top; i >= 0; i--)
//     {
//         std::cout << alphabets[i] << " ";
//     }
// }