// Algorithm Binary Search
// step-1: input the sorted array elements
// Step-2: set beg = lower_bound, end = upper_bound , position
// Step-3: if high <= low then got to step - 9
// Step-4: set mid = (beg + end)/2
// Step-5: if arr[mid] = x
// return mid;
// [End if]
// step-6: if arr[mid] > x
// return call function(array, x, low, mid - 1)
// [End if]
// step-7: if arr[mid] > x
// return call function(array, x, mid + 1, high)
// [End if]
// Step-8: if position = -1
// print "value is not present in the array"
// [end of if]
// Step-9: exit

#include <stdio.h>

int binarySearch(int array[], int x, int low, int high)
{
    if (high >= low)
    {
        int mid = (low + high) / 2;

        // If found at mid, then return it
        if (array[mid] == x)
            return mid;

        // Search the left half
        if (array[mid] > x)
            return binarySearch(array, x, low, mid - 1);

        // Search the right half
        return binarySearch(array, x, mid + 1, high);
    }

    return -1;
}

int main(void)
{
    int array[] = {3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(array) / sizeof(array[0]);
    int x = 4;
    int result = binarySearch(array, x, 0, n - 1);
    if (result == -1)
        printf("Not found");
    else
        printf("\nElement is found at index %d\n", result);
}