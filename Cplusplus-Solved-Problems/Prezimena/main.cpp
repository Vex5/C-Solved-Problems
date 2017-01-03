#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<char>prezimena;
    vector<char>provjera;
    vector<string>nvp;

    int n,broj;
    char prezime[31], ps;
    bool ve;
    string pred = "PREDAJA";

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", &prezime);
        prezimena.push_back(prezime[0]);
    }

    printf("\n");

    for (int i = 0; i < prezimena.size(); i++)
    {

        broj = count(prezimena.begin(), prezimena.end(), prezimena.at(i));
        if (broj >= 5)
        {
            ve = true;
            ps = prezimena.at(i);

            if(find(provjera.begin(), provjera.end(), ps)!=provjera.end())
            {
                printf("");
            }
            else
            {
                printf("%c", ps);
                provjera.push_back(ps);
            }

        }

        else if(find(provjera.begin(), provjera.end(), ps)!=provjera.end() && broj <= 5 && ve == true)
        {
            printf("");
        }
        else
        {


            if(find(nvp.begin(), nvp.end(), "PREDAJA")!=nvp.end())
            {
                printf("");
            }
            else
            {
                printf("PREDAJA");
                nvp.push_back("PREDAJA");
            }

        }
    }

}
