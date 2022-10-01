#include <iostream>
#include <vector>

int main()
{
    // int arr[100][100], n, m, q, p1, p2;

    // std::cout << "Enter the number : ";
    // std::cin >> n >> q;

    // for (int i = 0; i < n; i++)
    // {
    //     std::cin >> m;
    //     for (int j = 0; j < m; j++)
    //     {
    //         std::cin >> arr[i][j];
    //     }
    // }

    // for (int i = 0; i < q; i++)
    // {
    //     std::cin >> p1 >> p2;
    //     std::cout << arr[p1][p2] << std::endl;
    // }

    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int>> vec(n);

    for (int i = 0; i < n; i++)
    {
        int s;
        std::cin >> s;

        vec[i].reserve(s);
        for (int j = 0; j < s; j++)
        {
            std::cin >> vec[i][j];
        }
    }

    for (int k = 0; k < m; k++)
    {
        int p1, p2;
        std::cin >> p1 >> p2;
        std::cout << vec[p1][p2] << " ";
    }
}