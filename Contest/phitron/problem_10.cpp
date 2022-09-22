#include <iostream>

int main()
{
    int arr[3] = {7, 21, -14};

    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3 - j + 1; j++)
        {
            if (arr[i] > arr[j + 1])
            {
                int temp = arr[i];
                arr[i] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}