
#include <stdio.h>

int main() {

    double salario, reajuste, percentual;
    scanf("%lf", &salario);

    if( salario <= 400 ) {

        percentual = 0.15;

    } else if( salario > 400 && salario <= 800 ) {

        percentual = 0.12;

    } else if( salario > 800 && salario <= 1200 ) {

        percentual = 0.10;

    } else if( salario > 1200 && salario <= 2000 ) {

        percentual = 0.07;

    } else {

        percentual = 0.04;
    }

    reajuste = salario * percentual;
    salario = salario + reajuste;

    printf("Novo salario: %.2f\n", salario);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %.0f %%\n", percentual * 100);

    return 0;
}

/*
    ----------------------------
    Entrada:
        400.00
    Saida:
        Novo salario: 460.00
        Reajuste ganho: 60.00
        Em percentual: 15 %
    ----------------------------
    ----------------------------
    Entrada:
        800.01
    Saida:
        Novo salario: 880.01
        Reajuste ganho: 80.00
        Em percentual: 10 %
    ----------------------------
    ----------------------------
    Entrada:
        2000.00
    Saida:
        Novo salario: 2140.00
        Reajuste ganho: 140.00
        Em percentual: 7 %
    ----------------------------
*/