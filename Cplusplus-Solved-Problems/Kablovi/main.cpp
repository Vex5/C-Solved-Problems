#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int x[100], y[100];
int marked[100];
float mat[100][100];

int main(void)
{
    int n, p;
    float minimal, len;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> x[i] >> y[i];

        //1e30 OZNACAVA OGRANICENU VRIJEDNOST BESKONACNOSTI!!
        mat[i][i] = 1e30;

        //KORISTIMO FORMULU IZ AN. G. ZA UDALJENOST IZMEDJU DVIJE TACKE!
        for(int j = 0; j < i; j++){
            mat[i][j] = mat[j][i] = sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
        }
    }

    //POCETNA DUZINA MORA BITI 0
    len = 0;
    marked[0] = 1;

    //ZA SVE VRIJEDNOSTI STAVITI DA NISU MARKIRANE (NE POSJECENE)
    for(int i = 1; i < n; i++){
        marked[i]=0;
    }

    //SAMA SRZ
    for(int i = 1; i < n; i++)
    {
        minimal = mat[0][0];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){

                //AKO ODREDJENA TACKA U MATRICI NIJE POSJECENA TE AKO
                //JE MANJA OD TRENUTACNE MINIMALNE VRIJEDNOSTI
                //ONDA MINIMALNU VRIJEDNOS IZJEDNACAVAMO SA TACKOM KOJU GLEDAMO
                if(!marked[i] && marked[j] && mat[i][j] < minimal) {
                    minimal = mat[p=i][j];
                    }

                }
            }

        //DODAJEMO SVE MINIMALNE VRIJEDNOSTI DO SADA NADJENE (ZBOG POSTAVE ZADATKA)
        //MOZE SE LAGANO MODIFIKOVATI ZA MAKSIMALNO AKO BUDE TRAZENO
        //U BUDUCNOSTI
        len += minimal;

        marked[p] = 1;
    }

    cout << len;

    return 0;
}

