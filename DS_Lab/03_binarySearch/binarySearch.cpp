// step - 1: input the sorted array elements
// Step 2: set beg = lower_bound, end = upper_bound, pos = - 1
// Step 3: repeat steps 4 and 5 while beg <=end
// Step 4: set mid = (beg + end)/2
// Step 5: if arr[mid] = val
// set pos = mid
// print pos
// go to step 6
// else if arr[mid] > val
// set end = mid - 1
// else
// set beg = mid + 1
// [end of if]
// [end of loop]
// Step 6: if pos = -1
// print "value is not present in the array"
// [end of if]
// Step 7: exit

#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int x);
int main()
{
    int arr[100], size, x;
    cout << "Enter the size of the array : ";
    cin >> size;
    cout << "Enter the " << size << " elements of the array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the position : ";
    cin >> x;

    int result = binarySearch(arr, 0, size - 1, x);
    if (result == -1)
    {
        cout << "Not found !" << result;
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
        if (arr[mid] > x)
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
