
#include <stdio.h>

int main() {

    int p1, p2, unidade1, unidade2;
    double valor1, valor2, pagar;

    scanf("%d %d %lf", &p1, &unidade1, &valor1);
    scanf("%d %d %lf", &p2, &unidade2, &valor2);
    
    pagar = valor1 * unidade1 + valor2 * unidade2;

    printf("VALOR A PAGAR: R$ %.2lf\n", pagar);

    return 0;
}

/*
    ---------------------
    Entrada:
        12 1 5.30
        16 2 5.10
    Saida:
        VALOR A PAGAR: R$ 15.50
    ---------------------
    ---------------------
    Entrada:    
        13 2 15.30
        161 4 5.20
    Saida:
        VALOR A PAGAR: R$ 51.40
    ---------------------

    ---------------------
    Entrada:
        1 1 15.10
        2 1 15.10
    Saida:
        VALOR A PAGAR: R$ 30.20
    ---------------------
*/