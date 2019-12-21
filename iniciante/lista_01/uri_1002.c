
#include <stdio.h>
#include <math.h>

int main() {

    const double pi = 3.14159;
    double area, raio;

    scanf("%lf", &raio);

    printf("A=%.4f\n", area = pi * pow(raio, 2));

    return 0;
}

/*
    --------------
    Entrada:
        2.00
    Saida:
        A=12.5664
    --------------

    -----------------
    Entrada:
        100.64
    Saida:
        A=31819.3103
    -----------------

    ----------
    Entrada:
        150.00
    Saida:
        A=70685.7750
    ----------
*/