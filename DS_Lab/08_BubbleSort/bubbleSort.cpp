// step - 1: input the array elements
// Step 2: Set i to 1
// Step 3: if i > n then go to step 9
// Step 4: Set j to 4
// Step 5: if j > n-i-1 then go to step 8
// Step 6: if arr[j] > arr[j+1] then swapping
// Step 7: Set j to j + 1 then go to step 4
// Step 8: Set i to i + 1 then go to step 2
// Step 9: Array arr of element number lower to upper
// Step 10: Exit

#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n);
void printArray(int arr[], int n);

int main()
{
    int arr[100], n, x;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the " << n << " elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Sorted array : ";
    printArray(arr, n);
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
}

void printArray(int arr[], int n)
{
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
