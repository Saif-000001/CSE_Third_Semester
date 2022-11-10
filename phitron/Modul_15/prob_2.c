#include <stdio.h>
#include <math.h>

int main()
{
    int n = 15;
    int mult = 1;
    int arr[n];
    int a = 1;
    int r = 2;
    for (int i = 0; i < n; i += 1)
    {
        int ratio = a * pow(r, i);
        printf("%d, ", ratio);
    }
}