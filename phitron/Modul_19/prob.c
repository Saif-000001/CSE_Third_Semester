#include <stdio.h>

int main()
{

    long long t;
    int size;
    scanf("%lld", &t);
    long long int result[t];

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &size);
        char str[size + 5];
        scanf("%s", str);

        int count = 0;
        for (int j = 0; j < size - 1; j++)
        {
            if ((str[j] == '0' && str[j + 1] == '1') || (str[j] == '1' && str[j + 1] == '0'))
            {
                count++;
            }
        }
        result[i] = count;
    }

    // printf("Output\n");
    for (int i = 0; i < t; i++)
    {
        printf("%lld\n", result[i]);
    }
    return 0;
}