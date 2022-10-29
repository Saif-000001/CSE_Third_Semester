#include <stdio.h>

int main()
{
    int arr[100];

    arr[0] = 5450;
    arr[1] = 450;
    arr[2] = arr[0] - arr[1];
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);

    return 0;
}