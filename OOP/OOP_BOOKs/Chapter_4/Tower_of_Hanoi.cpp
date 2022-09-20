#include <iostream>

void TOH(int d, char tower1, char tower2, char tower);

int main()
{
    int disk;
    std::cout << "Enter the number of disks : ";
    std::cin >> disk;

    TOH(disk, 'A', 'B', 'C');
    return 0;
}

void TOH(int d, char tower1, char tower2, char tower3)
{
    if (d == 1)
    {
        std::cout << "\n Shift top disk from tower " << tower1 << " to tower " << tower2;
        return;
    }
    TOH(d - 1, tower1, tower3, tower2);
    std::cout << "\n Shift top disk from tower " << tower1 << " to tower " << tower2;
    TOH(d - 1, tower3, tower2, tower1);
}