#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long n, r, F;
    double f1, f2;

    printf("Unesite broj n: ");
    scanf("%lld", &n);
    if(n > 50 || n <= 0){
        printf("Greska: Pogresan unos. (0<n<=50)");
    }
    else{
        double fi = pow(1+sqrt(5), n);
        double fi2 = pow(1 - sqrt(5), n);
        f1 = (fi - fi2);
        f2 = (pow(2, n) * sqrt(5));
        F = f1 / f2;

        printf("%lld", F);
    }

    return 0;
}

