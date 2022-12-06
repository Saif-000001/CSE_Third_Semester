#include <stdio.h>
#define PI 3.1416

struct Point
{
    float x;
    float y;
};

struct Triangle
{
    struct Point A;
    struct Point B;
    struct Point C;
};

struct Point center(struct Triangle t)
{
    struct Point ans;
    ans.x = (t.A.x + t.B.x + t.C.x) / 3;
    ans.y = (t.A.y + t.B.y + t.C.y) / 3;
    return ans;
}

int main()
{
    struct Point p1 = {1, 1};
    struct Point p2 = {2, 2};
    struct Point p3 = {3, 3};

    struct Triangle P = {p1, p2, p3};

    struct Point cen = center(P);

    printf("Center distance (%.2f , %.2f)\n", cen.x, cen.y);

    return 0;
}