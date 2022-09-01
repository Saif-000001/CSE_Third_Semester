#include <iostream>

void bubbleSort(int arr[], int n);
void print(int arr[], int n);

int binarySearch(int arr[], int n, int loc, int start, int end);
void maxMin(int arr[], int n);

int main()
{
    int arr[100], n;
    std::cout << "Enter the array size : ";
    std::cin >> n;

    std::cout << "Enter the array : ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int choice, result;
    std::cout << "Enter the choice your case : ";
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        print(arr, n);
        break;
    case 2:
        int x;
        std::cout << "Enter the position : ";
        std::cin >> x;
        result = binarySearch(arr, n, x, 0, n - 1);
        if (result == -1)
        {
            std::cout << "Not found ! ";
        }
        else
        {
            std::cout << "found " << x << " in the list at position " << result << " " << std::endl;
        }
        break;
    case 3:
        maxMin(arr, n);
        break;

    default:
        std::cout << "Noting" << std::endl;
        break;
    }
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // return;
}

void print(int arr[], int n)
{
    bubbleSort(arr, n);
    std::cout << "Sorted list : ";
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int binarySearch(int arr[], int n, int loc, int start, int end)
{
    bubbleSort(arr, n);
    while (end >= start)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == loc)
        {
            return mid;
        }
        if (arr[mid] >= loc)
        {
            return binarySearch(arr, n, loc, start, mid - 1);
        }
        else
        {
            return binarySearch(arr, n, loc, mid + 1, end);
        }
    }
    return -1;
}

void maxMin(int arr[], int n)
{
    bubbleSort(arr, n);
    int max = arr[0], min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    std::cout << "Maximum " << max << ", "
              << "Minimum " << min << std::endl;
}