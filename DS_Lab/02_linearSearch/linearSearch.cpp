// step - 1: input the array elements
// Step 2: Set i to 1
// Step 3: if i > n then go to step 8
// Step 4: if arr[i] = x then go to step 7
// Step 5: Set i to i + 1
// Step 6: Go to Step 2
// Step 7: Print Element x Found at index i and go to step 9
// Step 8: Print element not found
// Step 9: Exit

// linearSearch
#include <iostream>

int linearSearch(int arr[], int size, int x);

int main()
{
    int arr[100], size, x;
    std::cout << "Enter the size of the array : ";
    std::cin >> size;
    std::cout << "Enter the " << size << " elements of the array : ";
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
    std::cout << "Enter the position : ";
    std::cin >> x;
    int result = linearSearch(arr, size, x);
    if (result == -1)
    {
        std::cout << "Result not found !";
    }
    else
    {
        std::cout << "Element of the index : " << linearSearch(arr, size, x);
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
