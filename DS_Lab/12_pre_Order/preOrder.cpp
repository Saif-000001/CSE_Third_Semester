// Algorithm
/*
    Step 1: Repeat Steps 3 to 4 while root != NULL
    Step 2: Write root -> data
    Step 3: preOrderTraversing(root -> left)
    Step 4: preOrderTraversing(root -> right)
    [end of loop]
    Step 5: exit
*/

#include <iostream>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

void insert(struct Node **root, int data)
{
    if ((*root)->data > data)
    {
        if ((*root)->left == NULL)
        {
            struct Node *node = new (struct Node);
            node->data = data;
            node->left = NULL;
            node->right = NULL;
            (*root)->left = node;
            return;
        }
        else
        {
            insert(&((*root)->left), data);
        }
    }
    else
    {
        if ((*root)->right == NULL)
        {
            struct Node *node = new (struct Node);
            node->data = data;
            node->left = NULL;
            node->right = NULL;
            (*root)->right = node;
            return;
        }
        else
        {
            insert(&((*root)->right), data);
        }
    }
}

void preOrderTraversing(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    std::cout << root->data << "\t";
    preOrderTraversing(root->left);
    preOrderTraversing(root->right);
}

int main()
{

    struct Node *root = new (struct Node);
    root->data = 10;
    root->left = NULL;
    root->right = NULL;

    insert(&root, 8);
    insert(&root, 18);
    insert(&root, 3);
    insert(&root, 15);

    preOrderTraversing(root);

    return 0;
}