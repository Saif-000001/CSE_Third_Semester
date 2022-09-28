#include <iostream>

int main()
{
    int arr[4] = {1, 4, 3, 2};
    for (int i = 4 - 1; i >= 0; i--)
    {
        std::cout << arr[i] << " ";
    }
}