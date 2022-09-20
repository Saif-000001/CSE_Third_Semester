#include <iostream>

int main()
{
    int size;
    int *arr = new int(size);

    std::cout << "Enter the size of the integer array : ";
    std::cin >> size;

    std::cout << "Creating an array of size " << size << std::endl;

    std::cout << "Dynamic allocation of memory for array arr is successful .";

    delete arr;
    return 0;
}