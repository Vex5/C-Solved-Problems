#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <math.h>

//JOS TREBA PROVJERITI DA LI JE A = B I OUTPUT POPRAVITI : 2 ceil f this
//NAPRAVI JOS JEDNU FUNKCIJU KOJA GLEDA DA LI JE RECTANGLE

using namespace std;

char c[30][30], a=1, b=1;
bool mark[30][30], kocka = true, k2[30];
int casse[30];

int gr[] = {1, 0, -1, 0};
int gk[] = {0, 1, 0, -1};
int n, m;

void tac(int x, int y)
{

    int kol, red;

    mark[x][y] = true;

    for(int i = 0; i < 4; i++)
    {
        kol = x + gr[i];
        red = y + gk[i];
        if(c[kol][red] == '.' && mark[kol][red] == false)
        {
            tac(kol, red);
        }
        else if(c[kol][red] == '#' && mark[kol][red] == false)
        {
            kocka = false;
        }

    }


}

void rec(int x, int y)
{

    if(c[x+1][y] == '#')
    {
        b++;
        rec(x+1,y);
    }
    else if(c[x][y+1] == '#')
    {
        a++;
        rec(x,y+1);
    }
}

void ggf(int x, int y)
{

    int kol, red;

    mark[x][y] = true;

    for(int i = 0; i < 4; i++)
    {
        kol = x + gr[i];
        red = y + gk[i];
        if(c[kol][red] == '#' && mark[kol][red] == false)
        {
            ggf(kol, red);
        }
        else if(c[kol][red] == '.' && mark[kol][red] == false)
        {

            ggf(kol, red);

        }
    }

}

int main()
{

    int res, res2;

    scanf("%d", &n);

    for(int g = 0; g < n; g++)
    {

        scanf("%d", &m);

        for(int i = 0; i < m; i++)
        {

            for(int j = 0; j < m; j++)
            {
                cin >> c[i][j];
            }
        }

        for(int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(c[i][j] == '#' && mark[i][j] == false)
                {
                    //markiraj
                    ggf(i, j);
                    //nadji a i b
                    rec(i, j);
                    //trazi # pored kocke
                    tac(i, j);
                }
            }
        }

        if(a == b)
        {
            k2[g] = true;

            if(kocka == false)
            {
                k2[g] = false;
            }
        }
        else
        {
            k2[g] = false;
        }

        cout << endl << b << endl << a << endl;

    }

    for(int i = 0; i < n; i++)
    {
        if(k2[i] == true)
        {
            cout << "\nCase#" << i << ": " << "YES!";
        }
        else
        {
            cout << "\nCase#" << i << ": " << "NO!";
        }
    }

    return 0;
}
