#include <iostream>
#include <limits>

void array(int arr[], int size);
int main()
{
    // int arr[] = {23, 43, 25, 45};
    // int size = sizeof(arr) / sizeof(arr[0]);
    int arr[100];
    int size;
    std::cout << "Enter the size of array : ";
    std::cin >> size;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        // std::cin >> arr[i];
        if (std::cin >> arr[i])
        {
            count++;
        }
    }
    array(arr, size);

    std::cin.clear();
    // std::cin.ignore(10000, '\n');
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string test;
    std::cin >> test;
    std::cout << test << std::endl;
    return 0;
}
void array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\t";
    }
    std::cout << std::endl;
}