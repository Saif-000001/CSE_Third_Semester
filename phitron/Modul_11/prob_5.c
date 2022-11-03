#include <stdio.h>

int main()
{
    int n, x;
    char c;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d%c", &arr[i], &c);
    }

    for (int i = 0; i < n; i++)
    {
        x = arr[i];
        int s1 = 0, s2 = 0, s3 = 0;
        while (x != 100)
        {
            if (x >= 80)
            {
                s1 += 3;
            }
            else if (x >= 60)
            {
                s2 += 2;
            }
            else
            {
                s3 += 1;
            }
            x++;
        }
        printf("%d minutes\n", s1 + s2 + s3);
    }
}