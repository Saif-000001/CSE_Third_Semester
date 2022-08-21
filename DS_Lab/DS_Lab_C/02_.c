// Algorithm linear Search
// step - 1: input the array elements
// Step 2: Set i to 1
// Step 3: if i > n then go to step 8
// Step 4: if arr[i] = x then go to step 7
// Step 5: Set i to i + 1
// Step 6: Go to Step 2
// Step 7: if i>n then go to step - 8
// print Element x Found at index i and go to step 9
// Step 8: Print element not found
// Step 9: Exit

#include <stdio.h>

int main()
{
    int a[50], i, x, n;
    printf("How many elements?\n ");
    scanf("%d", &n);

    printf("Enter array elements: \n");
    for (i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &x);

    for (i = 0; i < n; ++i)
        if (a[i] == x)
            break;

    if (i < n)
        printf("Element found at index %d", i);
    else
        printf("Element not found");

    return 0;
}