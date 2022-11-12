#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[101], ch2[102];
    fgets(ch1, sizeof(ch1), stdin);
    fgets(ch2, sizeof(ch2), stdin);

    int flog = 1, count = 0, length_ch1 = strlen(ch1) - 1, length_ch2 = strlen(ch2) - 1;

    for (int i = 0; i < length_ch1 || i < length_ch2; i++)
    {
        if (ch1[i] >= 'A' && ch2[i] <= 'Z')
        {
            ch1[i] += 32;
        }

        if (ch2[i] >= 'A' && ch2[i] <= 'Z')
        {
            ch2[i] += 32;
        }
    }

    if (length_ch1 > length_ch2)
    {
        int flog2 = 0;
        for (int i = 0; i < length_ch2; i++)
        {
            if (ch1[i] != ch2[i])
            {
                if (ch1[i] > ch2[i])
                {
                    flog2 = 1;
                    break;
                }
                else
                {
                    flog2 = 2;
                    break;
                }
            }
        }
        if (flog2 == 1)
        {
            printf("%s then %s in order\n", ch2, ch1);
        }
        else if (flog2 == 2)
        {
            printf("%s then %s in order\n", ch1, ch2);
        }
        else
        {
            printf("%s then %s in order\n", ch2, ch1);
        }

        return 0;
    }
    else if (length_ch2 > length_ch1)
    {
        int flog3 = 0;
        for (int i = 0; i < length_ch1; i++)
        {
            if (ch1[i] != ch2[i])
            {
                if (ch1[i] > ch2[i])
                {
                    flog3 = 1;
                    break;
                }
                else
                {
                    flog3 = 2;
                    break;
                }
            }
        }
        if (flog3 == 1)
        {
            printf("%s then %s in order\n", ch2, ch1);
        }
        else if (flog3 == 2)
        {
            printf("%s then %s in order\n", ch1, ch2);
        }
        else
        {
            printf("%s then %s in order\n", ch1, ch2);
        }

        return 0;
    }
    else
    {
        for (int i = 0; i < length_ch1; i++)
        {
            if (ch1[i] != ch2[i])
            {
                if (ch1[i] > ch2[i])
                {
                    flog = 1;
                    break;
                }
                else
                {
                    flog = 0;
                    break;
                }
            }
            else
            {
                count++;
            }
        }
    }

    if (length_ch1 == count)
    {
        printf("%s and %s are same in order\n", ch1, ch2);
        return 0;
    }

    if (flog == 1)
    {
        printf("%s then %s in order\n", ch2, ch1);
    }
    else
    {
        printf("%s then %s in order\n", ch1, ch2);
    }
}