// #include <stdio.h>

// int main()
// {
//     int n, i = 1;
//     scanf("%d", &n);
//     printf("The factors of %d are: ", n);
//     while (n != i)
//     {
//         if (n % i == 0)
//         {
//             printf("%d, ", i);
//         }
//         i++;
//     }
//     printf("%d.", n);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int arr[5], i;
//     for (i = 0; i < 5; i += 1)
//     {
//         arr[i] = i;
//     }
//     arr[0] *= arr[0];

//     printf("%d", arr[0]);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int arr[5], i, sum = 0;
//     for (i = 1; i <= 5; i += 1)
//     {
//         arr[i - 1] = i;
//     }
//     printf("%d\n", sum);
//     for (i = 1; i <= 5; i += 1)
//     {
//         sum += arr[i - 1];
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int arr[5], i, sum = 0;
//     for (i = 1; i <= 5; i += 1)
//     {
//         arr[i - 1] = i - 1;
//     }
//     for (i = 0; i < 5; i += 1)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[5] = {213, 10, 325, 507, 100};
//     int max = arr[0], i;
//     for (i = 1; i < 5; i += 1)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     printf("%d\n", max);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[3] = {1, 2, 3}, i, j;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = i; j < 3; j++)
//         {
//             printf("%d ", arr[j]);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5}, i = 5, j;
//     while (i >= 1)
//     {
//         arr[i - 1] -= i;
//         while (1)
//         {
//             arr[i - 1] += i;
//             break;
//         }
//         i -= 1;
//     }
//     for (j = 0; j < 5; j++)
//     {
//         printf("%d ", arr[j]);
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int num1 = n1;
    int num2 = n2;

    while (n1 != n2)
    {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("The GCD of %d and %d is %d.", num1, num2, n1);
    return 0;
}
