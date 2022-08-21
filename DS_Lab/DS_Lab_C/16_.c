// Algorithm
// step - 1 : input the string element
// step - 2: set i to 1
// step - 3: if str[i]=='\0' then go to step - 9
// step - 4: if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
// print alp++
// step - 5: else if (str[i] >= '0' && str[i] <= '9')
// print digit++
// step - 6: else(spacial character) print spc++
// step - 7: i to i + 1 then go to step - 2
// step - 8: print alp, digit, spc
// step - 9 : exit

#include <stdio.h>

//#define str_size 100 //Declare the maximum size of the string

void main()
{
    char str[100];
    int alp, digit, splch, i;
    alp = digit = splch = i = 0;

    printf("\n\nCount total number of alphabets, digits and special characters :\n");
    printf("--------------------------------------------------------------------\n");
    printf("Input the string : ");
    gets(str);
    // fgets(str, sizeof str, stdin);

    /* Checks each character of string*/

    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alp++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else
        {
            splch++;
        }

        i++;
    }

    printf("Number of Alphabets in the string is : %d\n", alp);
    printf("Number of Digits in the string is : %d\n", digit);
    printf("Number of Special characters in the string is : %d\n\n", splch);
}