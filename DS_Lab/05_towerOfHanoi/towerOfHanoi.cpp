// step - 1: input the number of n
// step - 2: fuction(n, src, aux, dist)
// step - 3: if n=0, then return
// step - 4: call recursive_function(n-1,src,dist,aux)
// step - 5: print src -> dist
// step - 6: call recursive_fuction(n-1,aux, src, dist)
// step - 7: exit

#include <iostream>
using namespace std;
void ToH(int n, char src, char aux, char dist);

int main()
{
    int n;
    cout << "Enter the number of N : ";
    cin >> n;
    ToH(n, 'A', 'B', 'C');
}

void ToH(int n, char src, char aux, char dist)
{
    if (n == 0)
    {
        return;
    }
    ToH(n - 1, src, dist, aux);
    cout << "MOVE disk -> " << n << " from " << src << " to " << dist << endl;
    ToH(n - 1, aux, src, dist);
}
