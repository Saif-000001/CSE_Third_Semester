#include <stdio.h>

struct Student
{
    int roll;
    char name[100];
    int age;
    float weight;
};

int main()
{
    // struct Student s = {22, "SAIF", 2056, 75.6};
    // s.age = 22;
    // s.roll = 2056;
    // s.weight = 75.2;
    // printf("Roll = %d\nName = %s\nAge = %d\nWeight = %.2f", s.roll, s.name, s.age, s.weight);
    // struct Student s1 = {22, "SAIF", 2056, 75.6};

    struct Student s1 = {2056, "SAIF", 22, 75.6};

    // scanf("%d %s %d %f", &s1.roll, &s1.name, &s1.age, &s1.weight);
    // struct Student s2 = {16, "MSI", 05, 53.6};
    struct Student s2 = {.weight = 75.6, .age = 22, .name = "MSI", .roll = 2056}; // designated initialization
    printf("Student 1 Inf : \n");
    printf("Roll = %d\nName = %s\nAge = %d\nWeight = %.2f\n\n", s1.roll, s1.name, s1.age, s1.weight);
    printf("Student 2 Inf : \n");
    printf("Roll = %d\nName = %s\nAge = %d\nWeight = %.2f", s2.roll, s2.name, s2.age, s2.weight);

    return 0;
}