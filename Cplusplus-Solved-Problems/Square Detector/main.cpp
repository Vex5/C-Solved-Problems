#include <iostream>
#include <stdio.h>
#include<conio.h>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{

    int t, n, cnt=0,cnt2=0, r, k, one=0, cbfl, pt, two=0;
    char bw[30][30], first, last;
    bool DA, elz;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;

        for (r = 0; r < n; r++)
        {
            for (k = 0; k < n; k++)
            {
                cin >> bw[r][k];

            }

        }
    }

        for (r = 0; r < n; r++)
        {
            for (k = 0; k < n; k++)
            {

                for (k = 0; k < n; k++)
                {
                    if(bw[r][k] == '#')
                    {
                        cnt++;

                        while (one != 1){

                            bw[r][k] = first;
                            cout << std::strchr(first);
                            pt = k;
                            if (r == 0 && k == 0){
                                elz = true;
                            }
                            else{
                                elz = false;
                            }
                            one++;

                        }
                        if (bw[r][k+1] != '#'){
                            bw[r][k] = last;
                            if(elz == true){
                                cbfl = k - 1;
                                cout << cbfl;
                                }
                            }
                            else{
                                cbfl = (k - pt) - 1;
                                cout << cbfl;
                            }


                        }


                    }



                }


            }

            for (r = 0; r < n; r++)
            {
                for (k = 0; k < n; k++)
                {

                    if(bw[r][k] == '#')
                    {


                        for(r = 0; r < n; r++)
                        {
                            if(bw[r][k] == '#')
                            {
                                cnt2++;
                            }
                        }
                    }

                }

            }

        }

    for (r = 0; r < n; r++)
            {
                for (k = 0; k < n; k++)
                {




                }

                    }

    cout << cnt << " " << cnt2 << "\n";
    cout << first << " " << last;
    }

    //PRETRAZITI SVAKI RED TAKO DA AKO POSTOJI . IZMEDJU # ILI # VAN KOCKE ISPISATI NO

/*
    if (cnt == cnt2){

        for (r = 0; r < n; r++)
        {
            for (k = 0; k < n; k++)
            {



                }
            }

    }

/*
    if (cnt == cnt2)
    {
        for (r = 0; r < n; r++)
        {
            for (k = 0; k < n; k++)
            {
                if (bw[r][k] == '#'){
                    DA = true;
                }
                else if(bw[r][k] != '#'){
                    DA = false;
                }
            }

        }
    }

    if (DA == true){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
*/


