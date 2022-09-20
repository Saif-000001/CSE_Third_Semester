#include <iostream>

const int size = 3;
class matrix
{
    int m[size][size];

public:
    void read()
    {
        std::cout << "Enter the element of 3X3 matrix : \n";
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                std::cout << "m[" << i << "] [" << j << "] = ";
                std::cin >> m[i][j];
            }
        }
    }
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << std::endl;
            for (int j = 0; j < size; j++)
            {
                std::cout << m[i][j] << "\t";
            }
        }
    }

    friend matrix trans(matrix);
};

matrix trans(matrix x)
{
    matrix y;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            y.m[i][j] = x.m[j][i];
        }
    }
    return (y);
}

int main()
{
    matrix mat1, mat2;

    mat1.read();
    std::cout << "\nYou Enter the following matrix : ";
    mat1.display();

    mat2 = trans(mat1);
    std::cout << "\nTransposed matrix : ";
    mat2.display();

    return 0;
}
