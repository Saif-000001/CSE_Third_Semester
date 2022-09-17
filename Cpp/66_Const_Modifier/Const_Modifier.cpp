#include <iostream>

void print_array(const int arr[], int size);
int main()
{
    int arr[] = {1, 2, 3};
    print_array(arr, 3);
    std::cout << arr[0] << std::endl;
}

void print_array(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // arr[i]++;
        std::cout << arr[i] << "\t";
    }
    std::cout << std::endl;
}