#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int target, count = 0;
    scanf("%d", &target);
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {

            if ((arr[i] + arr[j + 1]) == target)
            {

                count = 1;
                break;
            }
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

// int size, target, f=0;
//     printf("Enter the size of arr: ");
//     scanf("%d", &size);
//     int arr[size];
//     //2, 2, 2, 6, 8
//     printf("Enter the elements of arr: ");
//     for(int i =0; i < size; i++){
//         scanf("%d", &arr[i]);
//     };

//     printf("Enter the target: ");
//     scanf("%d", &target);
//     for(int i = 0; i < size-1;){

//         int j = i+1, n = size-1;
//         while(j <= n){
//             if(arr[i]+arr[j] == target){
//                 f = 1;
//                 break;
//             }