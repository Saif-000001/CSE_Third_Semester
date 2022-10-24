#include <stdio.h>

int main()
{
    int choc, pack;
    scanf("%d", &pack);
    choc = pack;
    while (pack >= 4)
    {
        choc += pack / 4;
        pack = (pack / 4) + (pack % 4);
    }

    printf("%d ", choc);
}