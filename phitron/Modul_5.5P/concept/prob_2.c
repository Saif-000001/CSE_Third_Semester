#include <stdio.h>

int main()
{
    int sum = 0, n, k, nextRoom = 101, nextFloor = 2;
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {

            sum += nextRoom;
            nextRoom++;
            if (j % k == 0)
            {
                nextRoom = (100 * nextFloor) + 1;
                nextFloor++;
            }
        }
    }
    printf("%d ", sum);
    return 0;
}