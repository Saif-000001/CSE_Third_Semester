#include <stdio.h>

struct Student
{
    double weigh;
    int roll;
};

int main()
{
    struct Student s = {.weigh = 75.53, .roll = 206};
    struct Student *sp;
    sp = &s;

    // printf("%d\n", sizeof(struct Student)); // 16
    printf("%d %f\n", sp->roll, sp->weigh);
    return 0;
}