#include <iostream>
#include <cstdio>

using namespace std;

char mat[1010][1010];
int len, n, m;

int gk[] = {1, 0, -1, 0};
int gr[] = {0, 1, 0, -1};

void mis(int x, int y)
{
    bool found;
    mat[x][y] = 'c';
/*
    for(int i = 0; i < m; i++){
            //cout << endl;
        for(int j = 0; j < n; j++){
            //cout << mat[i][j];
        }
    }

    //cout << endl;
*/
    int kol, red;

    for (int i = 0; i < 4; i++)
    {
        kol = x+gk[i];
        red = y+gr[i];
        if(mat[kol][red] != 'a'){
            continue;
        }
        else if(mat[kol][red] == 'a'){
            len++;
            found = true;
            break;
        }

    }
    if(found != true){
        int xl;
      for(int i = 0; i < 4; i++){

        if(xl == 4){
            cout << "-1";
            break;
        }

        kol = x+gk[i];
        red = y+gr[i];
        if(mat[kol][red] == '.'){
            len++;
            mis(kol, red);
        }
        else if(mat[kol][red] == 'X'){
            xl++;
            continue;
        }
        }
    }
    }

int main()
{
    int p1x, p1y, p2x, p2y, xl;
    unsigned long q;

    scanf("%d %d", &m, &n);

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }

    scanf("%d %d", &p1x, &p1y);
    scanf("%d", &q);

    for(int i = 0; i < q; i++){

        len=0;

        scanf("%d %d", &p2x, &p2y);

            if(mat[p1x-1][p1y-1] == 'X'){
                cout << "-1" << endl;
                continue;
            }
            else if(mat[p2x-1][p2y-1] == 'X'){
                cout << "-1" << endl;
                continue;
            }

        for(int i = 0; i < m; i++){
               // cout << endl;
            for(int j = 0; j < n; j++){

            if(i == p1x-1 && j == p1y-1){
                mat[i][j] = 'a';
            }
            else if(i == p2x-1 && j == p2y-1){
                mat[i][j] = 'e';
            }

       // cout << mat[i][j];
        }

    }

    for(int i = 0; i < m; i++){
        for(int j = 0;  j < n; j++){
            if(mat[i][j] == 'e'){
                mis(i, j);
            }
        }
    }
        cout << len << endl;

    }

    return 0;
}
