#include <stdio.h>

char string(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == '0' || arr[i] == '1')
            return '1';
        else
            return '0';
    }
}
int main()
{
    // char arr[] = {"011110"};
    char arr[] = {"aB1Bsi1001sd"};
    int n = sizeof(arr) / sizeof(char);
    char ans = string(arr, n);
    if (ans == '1')
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}