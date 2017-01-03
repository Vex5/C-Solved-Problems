#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;

bool marked[110][110];
char c[110][110];
int m, n;

void dfs(int x, int y)
{
    int gk[] = {1, 1, 0, -1, -1, -1, 0, 1}, gr[] = {0, 1, 1, 1, 0, -1, -1, -1};

   // marked[x][y] = true;

    c[x][y] = '*';

    int kol, red;

    for (int i = 0; i < 8; i++)
    {
        kol = x+gk[i];
        red = y+gr[i];
        if(c[kol][red] == '@' && !marked[kol][red])
        {
            dfs(kol, red);
        }
    }
}

int main()
{
    while (scanf("%d %d", &m, &n))
    {

        if (m == 0 && n == 0)
        {
            break;
        }
        int br = 0;

            for(int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cin >> c[i][j];
                }
            }

            for(int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if(c[i][j] == '@' && !marked[i][j])
                    {
                        br++;
                        dfs(i, j);
                    }

                }

            }

        cout << br << endl;
    }

    return 0;
}
