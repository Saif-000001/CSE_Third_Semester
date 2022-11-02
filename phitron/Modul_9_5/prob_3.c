#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int input[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }
    int largest = input[0];
    for (int i = 1; i < n; i++)
    {
        if (input[i] > largest)
        {
            largest = input[i];
        }
    }
    int arr[largest + 1];
    for (int i = 0; i <= largest; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        arr[input[i]] += 1;
    }

    int count = 1;
    for (int i = 0; i < largest; i++)
    {
        if (arr[0] != arr[i])
        {
            count = 0;
        }
    }
    if (count)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}

// int n, f = 1;
//     scanf("%d", &n);
//     int initValue;
//     scanf("%d", &initValue);
//     for(int i = 0; i < n-1; i++){
//         int temp;
//         scanf("%d", &temp);
//         if(initValue != temp && f){
//             f = 0;
//         }
//     }

// if(f)printf("YES\n");
// else printf("NO\n");