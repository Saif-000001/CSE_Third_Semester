#include <stdio.h>

void swap(int *L, int *R)
{
    int temp = *L;
    *L = *R;
    *R = temp;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int Q;
    int L, R;
    scanf("%d", &Q);
    for (int i = 1; i <= Q; i++)
    {

        scanf("%d%d", &L, &R);
        if (L != R)
            swap(&arr[L], &arr[R]);
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}