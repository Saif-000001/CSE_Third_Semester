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

// #include <stdio.h>
// int main()
// {
//     // int n1, n2;
//     // scanf("%d %d", &n1, &n2);
//     // int num1 = n1;
//     // int num2 = n2;

//     // while (n1 != n2)
//     // {
//     //     if (n1 > n2)
//     //         n1 -= n2;
//     //     else
//     //         n2 -= n1;
//     // }
//     // printf("The GCD of %d and %d is %d.", num1, num2, n1);

//     // char ch = '\0';
//     // printf("%d", ch);

//     // char str[] = "Ab";
//     // printf("%c", (str[0] + 32));

//     // char str[] = {'P', 'h', 'i', 't', 'r', 'o', 'n'};
//     // printf("%s", str);

//     // char str[] = {'P', 'h', 'i', 't', 'r', 'o', 'n', '\0'};
//     // printf("%s", str);

//     // char str[] = "Programming";
//     // int i = 0;
//     // while (str[i] != '\0')
//     // {
//     //     printf("%c ", str[i]);
//     //     i += 1;
//     // }
//     // printf(".");

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     double value = (22 / 3.0);
//     printf("%0.3lf", value);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num = 10;
//     int a = num / -4;
//     int b = num % -4;
//     printf("%d %d\n", a, b);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int x = 1, y = -1;
//     printf("%d", (x != 7) && (x <= y));
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     for (i)
//     {
//         printf("Phitron");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int ar[] = {2, 4, 6, 8};

//     ar[0] = 23;
//     ar[3] = ar[1];
//     printf("%d%d", ar[0], ar[3]);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int array[2][3] = {{10, 20, 30}, {40, 50, 60}}, i = 1, j = 0;
//     array[i][j] = array[j][i];
//     printf("%d,%d", array[i][j], array[j + 1][i + 1]);

//     return 0;
// }

// #include <stdio.h>

// void getSum()
// {
//     int a = 10, b = 5;
//     printf("%d", a + b);
// }
// int main()
// {
//     printf("ok");
//     return 0;
// }

// #include <stdio.h>
// int addition();

// int main()
// {
//     int result;
//     result = addition();
//     printf("%d", result * 2);
//     return 0;
// }

// int addition()
// {
//     int num1 = 10, num2 = 5;
//     return num1 + num2;
// }

// #include <stdio.h>
// int addition();

// int main()
// {
//     int result;
//     result = addition();
//     printf("%d", result * 2);
//     return 0;
// }

// int addition()
// {
//     int num1 = 10, num2 = 5;
//     return num1 + num2;
// }

// #include <stdio.h>
// void fun(int n)
// {
//     if (n > 0)
//     {
//         fun(n - 1);
//         printf("%d ", n);
//     }
// }
// int main()
// {
//     int x = 4;
//     fun(x);
//     return 0;
// }

// #include <stdio.h>
// int value = 2;
// void foo(int n)
// {
//     value *= 2;
// }
// int main()
// {
//     printf("%d \n", value);
//     return 0;
// }

// #include <stdio.h>
// int value = 3;
// void foo(int n)
// {
//     value *= 2;
// }
// int main()
// {
//     printf("%d \n", value);
//     foo(2);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a[3] = {80, 30, 100};
//     printf("%d", *(a + 1));
// }

// #include <stdio.h>
// void func(int x)
// {
//     x = 80;
// }
// int main()
// {
//     int y = 50;
//     func(y);
//     printf("%d", y);
//     return 0;
// }

// #include <stdio.h>

// void func(int *x)
// {
//     *x = 80;
// }
// int main()
// {

//     int y = 50;
//     func(&y);
//     printf("%d", y);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int x = 10, *ptr;
//     ptr = &x;
//     *ptr += 2;
//     printf("%d, %d", *ptr, x);
//     return 0;
// }

// #include <stdio.h>

// int sorting(int arr[], int n);
// int largeNumber(int arr[], int n, int k);
// int smallNumber(int arr[], int n, int k);

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int k;
//     scanf("%d", &k);
//     int large = largeNumber(arr, n, k);
//     int small = smallNumber(arr, n, k);

//     printf("%dth largest element = %d\n", k, large);
//     printf("%dth largest element = %d\n", k, small);

//     return 0;
// }

// int sorting(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     return -1;
// }

// int largestNumber(int arr[], int n, int k)
// {
//     int sort = sorting(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == arr[k + 1])
//         {
//             return arr[i];
//         }
//     }
//     return -1;
// }

// int smallNumber(int arr[], int n, int k)
// {
//     int sort = sorting(arr, n);

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == arr[k - 1])
//         {
//             return arr[i];
//         }
//     }
//     return -1;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 10;
//     int *p = &a;
//     int **q = &p;
//     **q = 22;
//     printf("%d", a);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     double a = 2.5;
//     int b;
//     b = (int)a + 5;
//     printf("%d", b);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *ptr;
    ptr = (int *)malloc(1 * sizeof(int));
    printf("%d", *ptr);
    return 0;
}
