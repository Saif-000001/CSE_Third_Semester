// Algorithm
/*
    Step 1: Repeat Steps 3 to 4 while root != NULL
    Step 2: Write root -> data
    Step 3: call fuction(root -> left)
    Step 4: call function(root -> right)
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
void preorder(struct node *root)
{
    if (root == NULL)
        return;
    printf(" %d  ", root->data);
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    struct node *root = newNode(10);
    root->left = newNode(22);
    root->left->left = newNode(44);
    root->left->right = newNode(95);
    root->right = newNode(73);
    preorder(root);
    return 0;
}