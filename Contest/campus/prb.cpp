#include <iostream>
#define SIZE 5

class Stack
{
    int top;
    int arr[SIZE];

public:
    Stack()
    {
        top = -1;
    }
    bool push(int x);
    void pop();
};

bool Stack::push(int x)
{
    if (top >= SIZE - 1)
    {
        std::cout << "Stack Overflow!\n";
        return false;
    }
    arr[++top] = x;

    std::cout << x << " pushed into stack \n";

    return true;
}

void Stack::pop()
{
    if (top < 0)
    {
        std::cout << "Stack Underflow\n";
    }
    else
    {
        int x = arr[top--];
        std::cout << x << " pop into stack \n";
    }
}

int main()
{

    Stack stk;

    // stk.push(1);
    // stk.push(2);
    // stk.push(3);
    // stk.push(4);
    // stk.push(5);

    // std::cout << std::endl;
    // stk.pop();
    // stk.pop();

    int choice;
    std::cout << "Enter choice number : ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        for (int i = 0; i < 5; i++)
        {
            stk.push(i);
        }
    case 2:
        stk.pop();
    case 3:
        stk.push(2);
        break;
    default:
        break;
    }

    return 0;
}