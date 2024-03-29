#include <stdio.h>
#include <math.h>

struct Point
{
    int x;
    int y;
};

int manhattan(struct Point p, struct Point q)
{
    int res = abs(p.x - q.x) + abs(p.y - q.y);
    return res;
}

int main()
{
    // struct Point p1 = {1, 1};
    // struct Point p2 = {4, 5};
    struct Point p1;
    struct Point p2;

    scanf("(%d,%d)\n", &p1.x, &p1.y);
    scanf("(%d,%d)", &p2.x, &p2.y);

    int ans = manhattan(p1, p2);

    printf("Manhattan distance is %d\n", ans);
    return 0;
}
