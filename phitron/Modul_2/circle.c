// %c                                                  Character
// %d                                                  Signed integer
// %e or %E                                        Scientific notation of floats
// %f                                                   Float values
// %g or %G                                       Similar as %e or %E
// %hi                                                 Signed integer (short)
// %hu                                                Unsigned Integer (short)
// %i                                                   Unsigned integer
// %l or %ld or %li                              Long
// %lf                                                  Double
// %Lf                                                 Long double
// %lu                                                 Unsigned int or unsigned long
// %lli or %lld                                     Long long
// %llu                                                Unsigned long long
// %o                                                  Octal representation
// %p                                                  Pointer
// %s                                                  String
// %u                                                  Unsigned int
// %x or %X                                       Hexadecimal representation
// %n                                                 Prints nothing
// %%                                                Prints % character

#include <stdio.h>

int main()
{
    int r;
    printf("Enter the number of radius : ");
    scanf("%d", &r);

    float circle = 3.1416 * r * r;
    printf("Circle = %f", circle);
    return 0;
}