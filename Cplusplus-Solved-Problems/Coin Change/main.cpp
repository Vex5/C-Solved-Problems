#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int novcanice[] = {1, 5, 10, 25, 50};
int cilj, broj_novcanica=5, niz[10000], i , j;

unsigned long long int c[7500];

int main()
{

    c[0] = 1;

    for(i = 0; i < 5; i++)
    {
        for (j = novcanice[i]; j < 7500; j++)
        {

            c[j] += c[j-novcanice[i]];

        }
    }

    while (scanf ("%d", &cilj) == 1)
    {
        printf ("%d\n", c[cilj]);
    }
        return 0;
}
