#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec{5, 2, 3};
    int count = 0, sum = 0;

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec.size() - i - 1; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
                count++;
            }
        }
    }
    std::cout << "Array is sorted in " << count << " swaps." << std::endl;
    std::cout << "First Element: " << vec[0] << std::endl;
    std::cout << "Last Element: " << vec[3 - 1] << std::endl;
}