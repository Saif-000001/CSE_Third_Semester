// Algorithm
// step - 1 : input the array elements
// step - 2 : initialize max = min = arr[0]
// step - 3 : Repeat from i to n
// a. if(arr[i]>max)
// max = arr[i]
// b. if(arr[i]<min)
// min = arr[i]
// step - 4 : print max, min

#include <iostream>

void minMax(int arr[], int n);

int main()
{
    int arr[100], n;
    std::cout << "Enter the size of the array : ";
    std::cin >> n;
    std::cout << "Enter the elements of the array " << n << " :";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    minMax(arr, n);
}

void minMax(int arr[], int n)
{
    int max = 0, min = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    std::cout << "Max = " << max << " "
              << "Min = " << min << std::endl;
}