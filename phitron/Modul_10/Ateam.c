#include <stdio.h>

int main()
{
    int n, a;
    scanf("%d", &n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        // int a, b, c;
        // scanf("%d%d%d", &a, &b,&c);
        // if(a+b+c>=2){
        //     count++;
        // }

        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a);
            sum += a;
        }

        if (sum >= 2)
        {
            count++;
        }
    }
    printf("%d", count);
}