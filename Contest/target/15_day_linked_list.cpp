#include <iostream>

class Node
{
public:
    int data;
    Node *next;
    Node(int a)
    {
        data = a;
        next = NULL;
    }
};

class Solution
{
public:
    Node *insert(Node *head, int data)
    {
        Node *new_node = new Node(data);
        new_node->data = data;
        new_node->next = head;
        head = new_node;
        return head;
    }

    Node *insertEnd(Node *head, int data)
    {
        Node *new_node = new Node(data);
        new_node->data = data;
        new_node->next = NULL;
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        return new_node;
    }

    void display(Node *head)
    {
        Node *start = head;
        while (start)
        {
            std::cout << start << " ";
            start = start->next;
        }
    }
};

int main()
{
    Node *head = NULL;

    Solution myList;
    int T, data;
    std::cin >> T;
    while (T >= data)
    {
        std::cin >> data;
        head = myList.insert(head, data);
    }
    myList.display(head);
}