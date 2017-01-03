#include <iostream>
#include <cstdio>

using namespace std;

char p[30][30];
bool mark[30][30], sq = true;
int n, a=1, b=1, nad;

void kocka(int x, int y){

    if(p[x+1][y] == '#'){
        a++;
        kocka(x+1, y);
    }
    else if(p[x][y+1] == '#'){
        b++;
        kocka(x, y+1);
    }

}

void border(int x, int y){

    mark[x][y] = true;
    p[x][y] = '*';
/*
    for(int i = 0; i < n; i++){
                cout << endl;
                for(int j = 0; j < n; j++){
                    cout << p[i][j];
                }
            }
    cout << endl;*/

    if(p[x][y+1] == '#' && mark[x][y+1] == false){
        border(x, y+1);
    }
    if(p[x+1][y] == '#' && mark[x+1][y] == false){
        border(x+1, y);
    }
    if(p[x][y-1] == '#' && mark[x][y-1] == false){
        border(x, y-1);
    }
    if(p[x-1][y] == '#' && mark[x-1][y] == false){
        border(x-1, y);
    }
    else if(p[x][y] == '.'){
        cout << "\nNO\n";
    }


}

int main()
{

    int t;

    scanf("%d" ,&t);

    for(int x = 0; x < t; x++){
        scanf("%d", &n);
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    cin >> p[i][j];
                }
            }

        for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    if(p[i][j] == '#'){
                        kocka(i, j);
                    }
                }
            }

        cout << a << " " << b << endl;

       if(a != b){
        sq = false;
        cout << "NO";
        return 0;

       }
       else{
        sq = true;

        for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    if(p[i][j] == '#'){
                        p[i][j] = '*';
                        nad++;
                        if(nad == 2){
                            cout << "\nNO\n";
                        }else{
                        border(i, j);
                        }
                    }
                }
            }

       }
    }



}
