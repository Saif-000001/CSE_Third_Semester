/* *enqueue algorithm of queue
    enqueue(x)
    Step-1: if rear >= SIZE-1
            print Queue is overflow
            go to step-6
            [end of if]
    Step-2: if front = 0, then front = 0
    Step-3: rear++
    Step-4: arr[rear] = x
    Step-5: print Inserted x
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
    Step-4: exit */

#include <iostream>
#define SIZE 5
class queue
{
    int front;
    int rear;
    int arr[SIZE];

public:
    queue()
    {
        rear = -1;
        front = -1;
    }

    void enqueue(int x);
    void dequeue();
};

void queue::enqueue(int x)
{
    if (rear >= SIZE - 1)
    {
        std::cout << "Queue is overflow !" << std::endl;
    }
    if (front == -1)
    {

        front = 0;
    }
    rear++;
    arr[rear] = x;
    std::cout << " Inserted  " << x << std::endl;
}

void queue::dequeue()
{
    if (front == -1)
    {
        std::cout << "Queue is Underflow ";
    }

    else
    {

        std::cout << " deleted " << arr[front] << std::endl;
        front++;
    }
}

int main()
{
    queue Q;
    Q.enqueue(7);
    Q.enqueue(6);
    Q.enqueue(5);
    Q.enqueue(9);
    Q.enqueue(3);

    std::cout << std::endl;
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();

    return 0;
}