#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;

    printf("Unesite n: ");
    scanf("%d", &n);

    char matrica[n][n];


    if(n > 30 || n < 1)
    {
        printf("Greska: n mora zadovoljavati ogranicenja (1<=n<=30)");
    }
    else
    {
        int i;

        int p = n;
        int o = 1;
        for(i = 1; i <= n; i++){
            int j;
            for(j = 1; j <= n; j++){
                if(i == 1 || i == n || j == 1 || j==n){
                    matrica[i][j] = '*';
                }
                else{
                    matrica[i][j] = ' ';
                }
                if(i == o && j == o){
                        matrica[i][j] = '*';
                        matrica[i][p] = '*';
                        o=o+2;
                        p=p-2;

                }
           }
        }

        int k = 3;
        int s = n-2;


        for(i = 1; i <= n; i++){
            int j;
            for(j = 1; j <= n; j++){
                if(i == k && j == k){
                    int z = k;
                    for(z; z < s; z++){
                        matrica[z][j] = '*';
                        matrica[i][z] = '*';
                    }
                    k = k + 2;
                    s = s - 2;
                }
            }
        }+

        int uz;
        if(n % 2 == 0){
            uz = n/4;
            printf("%d", uz);
        }
        else{
            uz = n/4+1;
            printf("%d", uz);
        }
        k=3;
        s=n-2;

        int l;
        for(l = 1; l <= uz; l++)
        {
            int i=1;
            for(i; i <= n; i++)
            {
                int j=1;
                for(j; j <= n; j++)
                {
                    if(i == s && j == s)
                    {
                        int z = k;
                        for(z; z < s; z++)
                        {
                            matrica[i][z] = '*';
                            matrica[z][j] = '*';
                        }
                        k=k+2;
                        s=s-2;
                    }
                }

            }
        }

        for(i = 1; i <= n; i++){
            int j;
            for(j = 1; j <= n; j++){
                printf("%c", matrica[i][j]);
            }
            printf("\n");
        }
        return 0;
    }
}
