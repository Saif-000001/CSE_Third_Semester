#include <stdio.h>

int main()
{

    while (1)
    {
        int a, b;
        char cancel;
        char c;
        printf("Enter click c : Exit click e : ");
        scanf("%c", &cancel);
        if (cancel == 'c')
        {
            scanf("%d %c %d", &a, &c, &b);
            int result;
            if (c == '+')
            {
                result = a + b;
            }
            else if (c == '-')
            {
                result = a - b;
            }
            else if (c == '*')
            {
                result = a * b;
            }
            else if (c == '/')
            {
                result = a / b;
            }

            printf("%d %c %d = %d \n", a, c, b, result);
        }
        else if (cancel == 'e')
        {
            break;
        }
    }
    return 0;
}