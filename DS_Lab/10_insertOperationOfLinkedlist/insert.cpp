// Algorithm
/*
    insertBegin(head, data)
    Step-1: Initialize *new_node
    Step-2: new_node->data = data;
    Step -3:new_node->next = *head;
    step-4: *head = new_node
    step-4:return new_node;

    insertEnd(head, data)
    Step-1: Initialize *new_node, *temp
    Step-2: new_node->data = data;
    Step-3:new_node->next = NULL;
    Step-4:temp = *head;
    Step-5:if temp->next != NULL then
     temp = temp->next;
    then go to step 4
    [end loop]
    Step-6:temp->next = new_node;
    Step-7: return new_node;
*/

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
    head->next = node1;
    node1->data = 25;
    node1->next = node2;
    node2->data = 35;
    node2->next = NULL;
    insertBegin(&head, 45);
    insertBegin(&head, 55);

    insertEnd(&head, 155);
    insertEnd(&head, 59);
    insertEnd(&head, 143);

    display(head);

    return 0;
}