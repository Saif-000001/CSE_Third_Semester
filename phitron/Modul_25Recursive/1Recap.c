// system - 1
/* #include <stdio.h>

void solve()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", a + b);
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        solve();
    }
} */

// system - 2
#include <stdio.h>

int take_radius()
{
    int r;
    printf("Pleas enter the radius of a circle : ");
    scanf("%d", &r);
    return r;
}

float calculate_Area(int radius)
{
    float ans = 3.1416 * radius * radius;
    return ans;
}

int main()
{
    int r = take_radius();

    float area = calculate_Area(r);
    printf("%.2f\n", area);
}