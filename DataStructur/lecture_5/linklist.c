#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct students
{
    int roll;
    char name[20];
    float marks;
    struct students *next;
};

int main()
{
    struct students *st;
    st = malloc(sizeof(struct students));
    int c = 0;
    for (int i = 0; i < 4; i++)
    {
        printf("Enter Roll number : ");
        scanf("%d", &st->roll);

        printf("\nEnter name : ");
        scanf("%s", &st->name);

        printf("\nEnter marks : ");
        scanf("%f", &st->marks);
        st->next = NULL;
    }

    while (st)
    {
        ++c;
        printf("\n%d.%20d.%20s.%20.3f", c, st->roll, st->name, st->marks);
        st = st->next;
    }

    return 0;
}