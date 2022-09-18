#include <iostream>

namespace util
{
    void print_array(const int arr[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << arr[i] << "\t";
        }
        std::cout << std::endl;
    }
}
using namespace util;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // util::print_array(arr, size);
    print_array(arr, size);

    return 0;
}