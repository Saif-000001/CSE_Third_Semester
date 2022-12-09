#include <stdio.h>

struct Student
{
    char name[30];
    int roll;
    float mark;
};

void student(struct Student s)
{
    printf("Displaying Information:\n");
    printf("Name: %s\n", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.2f\n", s.mark);
}

int main()
{
    struct Student s1;
    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter marks: ");
    scanf("%f", &s1.mark);

    student(s1);
    return 0;
}