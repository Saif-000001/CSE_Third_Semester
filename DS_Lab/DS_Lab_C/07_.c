/* *enqueue algorithm of queue
    enqueue(x)
    Step-1: if rear >= SIZE-1
            print Queue is overflow
            go to step-6
            [end of if]
    Step-2: if front = -1, then front = 0
    Step-3: rear++
    Step-4: arr[rear] = value
    Step-5: print Inserted value
    Step-6: exit
    *dequeue algorithm of queue
    dequeue()
    Step-1: if front == -1
            print Queue is Underflow
            go to step-4
            [end of if]
    Step-2:else if front !=-1
            print deleted and arr[front]
    Step-3: front++
    step-4: if (front > rear) then front = rear = -1
    Step-5: exit */

#include <stdio.h>

#include <stdlib.h>

#define Size 4

int front = -1, rear = -1, int_array[Size];
void enqueue();
void dequeue();
void show();
int main()
{
    int choice;

    while (1)
    {
        printf(" Operations performed by Queue");
        printf("\n1.enqueue the element 2.dequeue the element 3.Show 4.End");
        printf("\nEnter the choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
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
void enqueue()
{
    int value;
    if (rear == Size - 1)
        printf("\nQueue is Full!!");
    else
    {
        if (front == -1)
            front = 0;
        rear++;
        scanf("%d", &value);
        int_array[rear] = value;
        printf("Inserted -> %d", value);
    }
}
void dequeue()
{
    if (front == -1)
        printf("\nQueue is Empty!!");
    else
    {
        printf("Deleted : %d", int_array[front]);
        front++;
        if (front > rear)
            front = rear = -1;
    }
}

// Function to print the queue
void show()
{
    if (rear == -1)
        printf("\nQueue is Empty!!!");
    else
    {
        int i;
        printf("Queue elements are : \n");
        for (i = front; i <= rear; i++)
            printf("%d  ", int_array[i]);
    }
    printf("\n");
}