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
    Node *insert(Node *head, int new_data)
    {
        Node *new_node = new Node(new_data);
        new_node->data = new_data;
        new_node->next = head;
        head = new_node;
        return head;
    }

    void display(Node *head)
    {
        while (head != 0)
        {
            std::cout << head << " ";
            head = head->next;
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
        myList.insert(head, data);
    }
    myList.display(head);
}