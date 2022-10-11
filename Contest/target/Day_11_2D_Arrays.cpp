#include <iostream>
#include <vector>

int hourGlass(std::vector<std::vector<int>> arr)
{

    int prevSum = -100;
    int a, b, c, d, e, f, g;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (j + 2 < 6 && i + 2 < 6)
            {
                a = arr[i][j];
                b = arr[i][j + 1];
                c = arr[i][j + 2];
                d = arr[i + 1][j + 1];
                e = arr[i + 2][j];
                f = arr[i + 2][j + 1];
                g = arr[i + 2][j + 2];

                int sum = a + b + c + d + e + f + g;
                if (sum > prevSum)
                    prevSum = sum;
            }
        }
    }
    return prevSum;
}

int main()
{
    std::vector<std::vector<int>> arr;
    int n;
    for (int i = 0; i < 6; i++)
    {
        std::vector<int> temp;
        for (int j = 0; j < 6; j++)
        {
            std::cin >> n;
            temp.push_back(n);
        }
        arr.push_back(temp);
    }
    std::cout << hourGlass(arr);
    return 0;
}