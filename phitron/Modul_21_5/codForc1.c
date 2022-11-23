#include <stdio.h>
void solve()
{
    int x;
    scanf("%d", &x);
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int arr[100];
    arr[1] = a;
    arr[2] = b;
    arr[3] = c;
    int ans = 1;
    for (int i = 1; i <= 3; i++)
    {

        if (arr[x] == 0)
        {
            ans = 0;
            break;
        }
        x = arr[x];
    }
    if (ans == 1)
        printf("YES\n");
    else
        printf("NO\n");
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
}