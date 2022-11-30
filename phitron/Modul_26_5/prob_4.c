#include <stdio.h>
#define PI 3.1416

double areaCircle(int r)
{
    double area = PI * r * r;
    return area;
}

int main()
{
    int r;
    scanf("%d", &r);
    double ans = areaCircle(r);
    printf("%lf", ans);
    return 0;
}