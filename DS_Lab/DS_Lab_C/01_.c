// Algorithm
// step - 1 : input the array elements
// step - 2 : initialize max = min = arr[0]
// step - 3 : Repeat from i to n
// a. if(arr[i]>max)
// max = arr[i]
// b. if(arr[i]<min)
// min = arr[i]
// step - 4 : print max, min

#include <stdio.h>

void main()
{
    int arr1[100];
    int i, mx, mn, n;

    printf("\n\nFind maximum and minimum element in an array :\n");

    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    mx = arr1[0];
    mn = arr1[0];

    for (i = 1; i < n; i++)
    {
        if (arr1[i] > mx)
        {
            mx = arr1[i];
        }

        if (arr1[i] < mn)
        {
            mn = arr1[i];
        }
    }
    printf("Maximum element is : %d\n", mx);
    printf("Minimum element is : %d\n\n", mn);
}