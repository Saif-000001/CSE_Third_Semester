#include <stdio.h>

int main()
{
    int math, phy, chem;
    scanf("%d %d %d", &math, &phy, &chem);
    int total = math + phy + chem;
    int mathPhy = math + phy;

    if ((math >= 65 && phy >= 55 & chem >= 50) && (total >= 190) || (mathPhy >= 140))
    {
        printf("The candidate is eligible for admission.");
    }
    else
    {
        printf("The candidate is not eligible for admission.");
    }
    return 0;
}