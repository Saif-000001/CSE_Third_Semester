#include <iostream>
struct Node
{
    int data;
    struct Node *next;
};

void insert(Node **head, int data)
{

    struct Node *newNode = new (struct Node);

    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

int checkPalindrome(Node **first, Node *last)
{

    if (last == NULL)
    {
        return 1;
    }

    int result = checkPalindrome(first, last->next) && ((*first)->data == last->data);
    (*first) = (*first)->next;

    return result;
}

int main(void)
{
    int arr[100], n;
    std::cout << "Enter the array size : ";
    std::cin >> n;

    std::cout << "Enter the array : ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    struct Node *head = NULL;
    for (int i = 0; i < n; i++)
    {
        insert(&head, arr[i]);
    }

    if (checkPalindrome(&head, head))
    {
        std::cout << "True, it is a palindrome " << std::endl;
    }
    else
    {
        std::cout << "false, it is a not palindrome " << std::endl;
    }

    return 0;
}