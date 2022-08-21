// Algorithm Linked List
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

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display(struct node *nd)
{
    while (nd != NULL)
    {
        printf(" %d  ", nd->data);
        nd = nd->next;
    }
}

struct node *insert(struct node *head, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = head;
    head = newnode;
    return newnode;
}
struct node *insertLast(struct node *head, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

int main()

{
    struct node *head = NULL;
    struct node *node2 = NULL;
    struct node *node3 = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    node2 = (struct node *)malloc(sizeof(struct node));
    node3 = (struct node *)malloc(sizeof(struct node));
    head->data = 60;
    head->next = node2;
    node2->data = 50;
    node2->next = node3;
    node3->data = 59;
    node3->next = NULL;

    head = insert(head, 15);
    insertLast(head, 70);
    display(head);
}