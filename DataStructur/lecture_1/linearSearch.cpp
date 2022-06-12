#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int x);

int main()
{
    int arr[] = {7, 5, 6, 8, 9, 2, 3};
    int size = sizeof(arr) / sizeof(int);
    int x = 9;

    int result = linearSearch(arr, size, x);
    if (result == -1)
    {
        cout << "Result not found !";
    }
    else
    {
        cout << "Element of the index : " << linearSearch(arr, size, x);
    }
    return 0;
}

int linearSearch(int arr[], int size, int x)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}