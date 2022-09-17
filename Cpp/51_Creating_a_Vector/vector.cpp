#include <iostream>
#include <vector>

// void print_vector(std::vector<int> dat);
void print_vector(std::vector<int> &dat);

int main()
{
    /*

    std::vector<int> data{4, 5, 6, 7};
    data.push_back(45);
    // std::cout << data[3] << std::endl;
    // std::cout << data[data.size() - 1] << std::endl;
    std::cout << data.size() << std::endl;
    data.pop_back();
    std::cout << data.size() << std::endl;

    */

    // passing vector function
    std::vector<int> data{45, 25, 15, 35, 16};
    print_vector(data);
    print_vector(data);
    print_vector(data);
    print_vector(data);

    return 0;
}

// void print_vector(std::vector<int> data)
void print_vector(std::vector<int> &data)
{
    data.push_back(75);
    for (int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << "\t";
    }
    std::cout << std::endl;
}