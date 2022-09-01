// Algorithm stack

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
    Step-2: print x pop into stack
    Step-3: x = arr[top--]
    Step-4: exit
*/
#include <stdio.h>

#include <stdlib.h>

#define Size 4

int Top = -1, inp_array[Size];
void Push();
void Pop();
void show();

int main()
{
    int choice;

    while (1)
    {
        printf("Operations performed by Stack");
        printf("\n1.Push the element 2.Pop the element 3.Show 4.End");
        printf("\nEnter the choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            for (int i = 0; i < 5; i++)
            {
                Push(i);
            }
            break;
        case 2:
            Pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }
}

void Push(int x)
{

    if (Top == Size - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("Enter element to be inserted to the stack : ");
        scanf("%d", &x);
        Top = Top + 1;
        inp_array[Top] = x;
    }
}

void Pop()
{
    if (Top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf(" Popped element :  %d ", inp_array[Top]);
        Top = Top - 1;
    }
}

void show()
{

    if (Top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("Elements present in the stack : \n");
        for (int i = Top; i >= 0; --i)
            printf(" %d\n", inp_array[i]);
    }
}