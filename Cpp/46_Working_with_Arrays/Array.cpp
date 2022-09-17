#include <iostream>

int main()
{
    int array[] = {12, 43, 23, 45};
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << "\t";
    }
    return 0;
}