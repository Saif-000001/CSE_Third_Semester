// Algorithm

/*
    *push algorithm of stack
    push(x)
    Step-1: if top >= SIZE-1
            print Stack OverFlow
            go to step-4
            [end of if]
    Step-2: arr[++top] = x
    Step-3: print x pushed into stack
    Step-4: exit
    *pop algorithm of stack
    pop()
    Step-1: if top < 0
            print Stack Underflow
            go to step-4
            [end of if]
    Step-2: x = arr[top--]
    Step-3: print x pop into stack
    Step-4: exit
*/
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

    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    std::cout << std::endl;
    stk.pop();
    stk.pop();

    return 0;
}