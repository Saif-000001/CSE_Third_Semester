#include <iostream>
#include <vector>

int main()
{
    // int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         std::cout << arr[i][j] << "\t";
    //     }
    //     std::cout << std::endl;
    // }

    std::vector<std::vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}