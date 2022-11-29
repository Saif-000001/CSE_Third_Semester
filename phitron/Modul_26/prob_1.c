#include <stdio.h>
// void print_hash(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
// }

void print_hash(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        print_hash(i);
}