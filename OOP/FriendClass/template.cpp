#include <iostream>

template <class myTemplate1, class myTemplate2>
// template <class myTemplate>

// myTemplate add(myTemplate a, myTemplate b)
myTemplate1 add(myTemplate1 a, myTemplate2 b)
{
    return a + b;
}

int main()
{
    std::cout << add(7, 5) << std::endl;
    return 0;
}