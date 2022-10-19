#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n < 150)
    {
        printf("The person is Dwarf.");
    }
    else if (n >= 150 && n < 165)
    {
        printf("The person is average heigh.");
    }
    else
    {
        printf("The person is tall");
    }
}