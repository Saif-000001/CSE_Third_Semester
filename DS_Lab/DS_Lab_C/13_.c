// Algorithm
/*
    Step 1: Repeat Steps 2 to 3 while root != NULL
    Step 2: call function(root -> left)
    Step 3: call function(root -> right)
    Step 4: Write root -> data
    [end of loop]
    Step 5: exit
*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newNode(int data)
{

    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
void postorder(struct node *node)
{
    if (node == NULL)
        return;

    postorder(node->left);
    postorder(node->right);
    printf(" %d ", node->data);
}
int main()
{
    struct node *root = newNode(10);
    root->left = newNode(22);
    root->left->left = newNode(44);
    root->left->right = newNode(95);
    root->right = newNode(73);
    postorder(root);
    return 0;
}