#include <iostream>
#include <vector>
#include <array>

// void test(std::vector<int> data);
void test(std::array<int, 6> data);
// void test(int data[]);

int main()
{
    // std::vector<int> data = {1, 2, 3, 4, 5, 6};
    std::array<int, 6> data = {1, 2, 3, 4, 5, 6};
    test(data);

    /*

    int data[] = {1, 2, 3, 4, 5, 6};
    for (int n : data)
    {
        std::cout << n << "\t";
    }

    */
}

// void test(std::vector<int> data)
void test(std::array<int, 6> data)
// void test(int data[]) // error
{
    for (int n : data)
    {
        std::cout << n << "\t";
    }
    std::cout << "\n";
}