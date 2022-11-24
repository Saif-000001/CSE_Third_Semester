#include <stdio.h>

int is_Prim(int n)
{
    int flag = 1;
    if (n == 0 || n == 1)
    {
        flag = 0;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            flag = 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);

    int flag = 2;
    for (int i = 1; i <= n; i++)
    {
        // int flog = 1;
        // for (int j = 1; j < i; j++)
        // {
        //     if (is_Prim(i) == 1)
        //     {
        //         printf("%d ", flag);
        //     }
        //     flag++;
        // }
        // printf("\n");
        printf("%d ", is_Prim(i));
    }
}

// 1 to 100
// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     for (int i = 1; i < n; i++)
//     {
//         int flog = 1;
//         for (int j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//             {
//                 flog = 0;
//             }
//         }
//         if (flog == 1)
//         {
//             printf("%d \n", i);
//         }
//     }
// }