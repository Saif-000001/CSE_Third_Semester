#include <iostream>

template <typename T>
// void swap(T a, T b)
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
    std::cout << "a : " << a << "  \tb : " << b << "\n\n";
}

// Overloading function template
template <typename T>
void over_swap(T a[], T b[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
        std::cout << a[i] << " " << b[i] << "\t";
    }
    std::cout << "\n\n";
}
int main()
{
    int a = 10, b = 20;
    swap(a, b);
    std::cout << "a : " << a << "  \tb : " << b << "\n\n";

    int nines[] = {9, 9, 9, 9, 9, 9};
    int ones[] = {1, 1, 1, 1, 1, 1};

    for (int i = 0; i < 6; i++)
    {
        std::cout << nines[i] << " " << ones[i] << "\t";
    }
    std::cout << "\n\n";
    over_swap(nines, ones, 6);
    for (int i = 0; i < 6; i++)
    {
        std::cout << nines[i] << " " << ones[i] << "\t";
    }
    std::cout << "\n\n";

    return 0;
}