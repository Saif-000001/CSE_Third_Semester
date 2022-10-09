
//  pointer to pointer
#include <iostream>

int main()
{
    int a = 789;
    // pointer for a
    int *p1;

    // double pointer for p1
    int **p2;

    // storing address of a in p1
    p1 = &a;

    // Storing address of p1 in p2
    p2 = &p1;

    // Displaying value of var using
    // both single and double pointers
    std::cout << "Value of a = " << a << std::endl;
    std::cout << "Value of a using single pointer = " << *p1 << std::endl;
    std::cout << "Value of a using double pointer = " << **p2 << std::endl;

    return 0;
}
