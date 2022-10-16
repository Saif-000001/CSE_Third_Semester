#include <iostream>

int main()
{
    int arr[100], n, c = 0, num = 3;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] % i == 0)
        {
            // return;
            c = 1;
        }
    }
    if (arr[c] == 0)
    {
        num = arr[c++];
        std::cout << num << std::endl;
    }
}