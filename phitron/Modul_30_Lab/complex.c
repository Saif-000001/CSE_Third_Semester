#include <stdio.h>

struct Com
{
    double real;
    double img;
};

void printCom(struct Com c)
{
    printf("%.3lf %.3lfi\n", c.real, c.img);
}

struct Com add_com(struct Com p, struct Com q)
{
    struct Com ans;
    ans.real = p.real + q.real;
    ans.img = p.img + q.img;
    return ans;
}

struct Com mult_com(struct Com p, struct Com q)
{
    struct Com ans;

    ans.real = (p.real * q.real - p.real * q.img);
    ans.img = (p.real * q.img + p.img * q.real);
    return ans;
}

int main()
{
    struct Com p1 = {5.5, 5.4};
    struct Com p2 = {-2.5, 3.4};
    printCom(add_com(p1, p2));
    printCom(mult_com(p1, p2));
    return 0;
}