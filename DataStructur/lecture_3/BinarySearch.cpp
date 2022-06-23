#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int x);
int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(int);

    int result = binarySearch(arr, 0, n - 1, 10);
    if (result == -1)
    {
        cout << "Not found ! " << result;
    }
    else
    {
        cout << "Element is present index : " << result;
    }
}

int binarySearch(int arr[], int low, int high, int x)
{
    while (high >= low)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            return binarySearch(arr, low, mid - 1, x);
        }
        else
        {
            return binarySearch(arr, mid + 1, high, x);
        }
    }
    return -1;
}