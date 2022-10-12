
// queue using an array
#include <iostream>
struct Queue
{
    int front, rear, capacity;
    int *queue;
    Queue(int c)
    {
        front = rear = 0;
        capacity = c;
        queue = new int;
    }
    ~Queue() { delete[] queue; }
    void queueEnqueue(int data) // function to insert an element at the rear of the queue
    {
        if (capacity == rear) // check queue is full or not
        {
            std::cout << "Queue is full!" << std::endl;
            return;
        }
        // insert element at the rear
        else
        {
            queue[rear] = data;
            rear++;
        }
        return;
    }
    // function to delete an element from the front of the queue
    void queueDequeue()
    {
        // if queue is empty
        if (front == rear)
        {
            std::cout << "Queue is empty!" << std::endl;
            return;
        }
        // shift all the elements from index 2 till rear to the left by one
        else
        {
            for (int i = 0; i < rear - 1; i++)
            {
                queue[i] = queue[i + 1];
            }

            // decrement rear
            rear--;
        }
        return;
    }
    // print queue elements
    void queueDisplay()
    {
        int i;
        if (front == rear)
        {
            std::cout << "Queue is empty!" << std::endl;
            return;
        }
        // traverse front to rear and print elements
        for (i = front; i < rear; i++)
        {
            std::cout << queue[i] << std::endl;
        }
        return;
    }
    // print front of queue
    void queueFront()
    {
        if (front == rear)
        {
            std::cout << "Queue is Empty!" << std::endl;
            return;
        }
        std::cout << "Front Element is : " << queue[front] << std::endl;
        return;
    }
};
int main(void)
{
    // Create a queue of capacity 4
    Queue q(4);

    // print Queue elements
    q.queueDisplay();

    // inserting elements in the queue
    q.queueEnqueue(20);
    q.queueEnqueue(30);
    q.queueEnqueue(40);
    q.queueEnqueue(50);

    // print Queue elements
    q.queueDisplay();

    // insert element in the queue
    q.queueEnqueue(60);

    // print Queue elements
    q.queueDisplay();

    q.queueDequeue();
    q.queueDequeue();

    std::cout << "After two node deletion " << std::endl;

    // print Queue elements
    q.queueDisplay();

    // print front of the queue
    q.queueFront();

    return 0;
}
