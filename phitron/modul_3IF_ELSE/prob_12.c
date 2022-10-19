#include <stdio.h>

int main()
{
    int roll_no, phy, chem, comp;
    char str[100];
    gets(str);
    scanf("%d %d %d %d", &roll_no, &phy, &chem, &comp);
    int total = phy + chem + comp;
    float avg = total / 3.0;

    if (avg >= 80)
    {
        printf("Roll No : %d\n Name of Student : %s\n Marks in Physics : %d\n Marks in Chemistry : %d\n Marks in Computer Application : %d\n Total Marks = %d\n Percentage = %f\n", roll_no, str, phy, chem, comp, total, avg);
        printf("Division = First");
    }
    else
    {
        printf("Roll No : %d\n Name of Student : %c\n Marks in Physics : %d\n Marks in Chemistry : %d\n Marks in Computer Application : %d\n Total Marks = %d\n Percentage = %f\n", roll_no, str, phy, chem, comp, total, avg);
        printf("Division = other's");
    }
}