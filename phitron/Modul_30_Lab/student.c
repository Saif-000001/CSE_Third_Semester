#include <stdio.h>

struct Student
{
    int roll;
    char name[10];
    double mark;
};

void printStud(int n, struct Student s)
{
    printf("Information of student %d\n", n);
    printf("%d\n", s.roll);
    printf("%s\n", s.name);
    printf("%0.2lf\n", s.mark);
}

int main()
{
    struct Student s[5];

    int i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &s[i].roll);
        scanf("%s", s[i].name);
        scanf("%lf", &s[i].mark);
    }

    double sum = 0;
    for (int i = 0; i < 5; i++)
    {
        // printStud(i, s[i]);
        if (s[i].roll % 2 == 0)
            // printStud(i, s[i]);
            sum += s[i].mark;
    }
    printf("Sum = %.2lf\n", sum);
}

/*
1
msi
75.5

2
ms
76.2

3
si
75.3

4
sif
75.4

5
s
86.4
*/