#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, k, velicina_zgrade=0;

    printf("Upisite broj spratova: ");
    scanf("%d", &m);
    if(m > 100 || m <= 0)
    {
        printf("Greska: Pogresan unos");
    }
    else
    {
        printf("Upisite broj ulaza: ");
        scanf("%d", &n);
        if(n > 100 || n <= 0)
        {
            printf("Greska: Pogresan unos");
        }
        else
        {
            printf("Upisite redni broj stana: ");
            scanf("%d", &k);
            velicina_zgrade = m*n;
            if(k > velicina_zgrade)
            {
                printf("Greska: Pogresan unos");
            }
            else
            {

                int s[n];

                if(m == 1 && n == 1 && k == 1)
                {
                    printf("%d", 1);
                }
                else
                {
                    int i = k;
                    if((k-1) % n == 0)
                    {
                        if(k - n <= 0)
                        {
                            printf("Susjedi stana %d su: \n", k);
                            printf("%d\n%d\n", k+1, k+n);
                        }
                        else if(k - n != 0)
                        {
                            printf("Susjedi stana %d su: \n", k);
                            printf("%d\n%d\n%d\n", k-n, k+1, k+n);
                        }
                    }
                    else if(k % n == 0)
                    {
                        if(k - n <= 0)
                        {
                            printf("Susjedi stana %d su: \n", k);
                            printf("%d\n%d\n", k-1, k+n);
                        }
                        else if(k - n != 0)
                        {
                            printf("Susjedi stana %d su: \n", k);
                            printf("%d\n%d\n%d\n", k-n, k-1, k+n);
                        }

                    }
                    else if(k % n != 0)
                    {
                        if(k - n <= 0)
                        {
                            printf("Susjedi stana %d su: \n", k);
                            printf("%d\n%d\n%d\n", k-1, k+1, k+n);
                        }
                        else if(k - n != 0)
                        {
                            printf("Susjedi stana %d su: \n", k);
                            printf("%d\n%d\n%d\n%d\n", k-n, k-1, k+1, k+n);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
