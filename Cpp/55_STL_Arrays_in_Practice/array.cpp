#include <iostream>
#include <array>

void print_array(std::array<int, 5> &data, int size);

int main()
{
    std::array<int, 5> data = {2, 5, 3, 4, 6};
    print_array(data, 5);
}

void print_array(std::array<int, 5> &data, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << data[i] << "\t";
    }
    std::cout << std::endl;
}