
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
