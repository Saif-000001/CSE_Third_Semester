#include <stdio.h>

int main()
{
    int height, width;
    printf("Enter the triangle number : ");
    scanf("%d%d", &height, &width);

    float area = (double)height * width / 2;

    printf("Triangle = %0.3f", area);
    return 0;
}