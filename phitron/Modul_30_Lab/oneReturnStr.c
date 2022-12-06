#include <stdio.h>
#include <math.h>

struct Point
{
    float x;
    float y;
};

struct Point mad(struct Point m, struct Point n)
{
    struct Point ans;
    ans.x = (m.x + n.x) / 2;
    ans.y = (m.y + n.y) / 2;
    return ans;
}

int main()
{
    struct Point P1 = {1, 1};
    struct Point P2 = {4, 5};

    struct Point P3 = mad(P1, P2);

    printf("%0.2f %0.2f\n", P3.x, P3.y);
    return 0;
}