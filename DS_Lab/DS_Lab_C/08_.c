// Bubble sort in C

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

#include <stdio.h>

void sort(int arr[], int num)
{

    int x, y, temp;

    for (x = 0; x < num - 1; x++)
    {

        for (y = 0; y < num - x - 1; y++)
        {

            if (arr[y] > arr[y + 1])
            {

                temp = arr[y];

                arr[y] = arr[y + 1];

                arr[y + 1] = temp;
            }
        }
    }
}

int main()
{

    int arr[50], n, x;

    printf("Please Enter the Number of Elements you want in the array: ");

    scanf("%d", &n);

    printf("Please Enter the Value of Elements: ");

    for (x = 0; x < n; x++)

        scanf("%d", &arr[x]);

    sort(arr, n);

    printf("Array after implementing bubble sort: ");

    for (x = 0; x < n; x++)
    {

        printf("%d  ", arr[x]);
    }

    return 0;
}