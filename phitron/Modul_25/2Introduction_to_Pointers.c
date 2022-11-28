#include <stdio.h>

int main()
{
    // int a, b;
    // int *p;
    // p = &a;
    // printf("%d\n", &p); // decimal number address
    // printf("%p", &p);   // binary number address

    int arr[] = {4, 5, 6, 2, 3, 1};
    // printf("%p", arr);
    printf("%p", (arr + 1));
}