#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 18)
    {
        printf("Congratulation! You are eligible for casting your vote.");
    }
    else
    {
        printf("You are not eligible for casting your vote.");
    }

    return 0;
}