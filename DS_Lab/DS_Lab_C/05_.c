// Algorithm ToF
// step - 1: input the number of n
// step - 2: fuction(n, src, aux, dist)
// step - 3: if n>0, then step - 7
// step - 4: call recursive_function(n-1,src,aux,dist)
// step - 5: print src -> dist
// step - 6: call recursive_fuction(n-1,aux, dst, src)
// step - 7: exit

#include <stdio.h>

// C recursive function to solve tower of hanoi puzzle
void towerOfHanoi(int n, char src, char dst, char aux)
{

    if (n > 0)
    {
        towerOfHanoi(n - 1, src, aux, dst);
        printf("\n Move disk %d from rod %c to rod %c\n", n, src, dst);
        towerOfHanoi(n - 1, aux, dst, src);
    }
}

int main()
{
    int n = 3;                      // Number of disks
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods A source C destination B aux/helper

    return 0;
}