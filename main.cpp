
// insert linked list
#include <iostream>

struct Node
{
    int data;
    struct Node *next;
};
void *insertBegin(struct Node **head, int data)
{
    struct Node *new_node = new (struct Node);
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
    return *head;
}
void *insertEnd(struct Node **head, int data)
{
    struct Node *new_node, *temp;
    new_node = new (struct Node);
    new_node->data = data;
    new_node->next = NULL;
    temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    return new_node;
}
void display(struct Node *node)
{
    std::cout << std::endl;
    while (node != NULL)
    {
        std::cout << node->data << " ";
        node = node->next;
    }
    std::cout << std::endl;
}

int main()
{
    struct Node *head = NULL;
    struct Node *node1 = NULL;
    struct Node *node2 = NULL;
    head = new (struct Node);
    node1 = new (struct Node);
    node2 = new (struct Node);
    head->data = 10;
    head->next = node2;
    node2->data = 35;
    node2->next = NULL;
    insertBegin(&head, 55);
    insertEnd(&head, 15);
    display(head);
}