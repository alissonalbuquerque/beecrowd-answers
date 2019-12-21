
#include <stdio.h>

int main() {

    char nome[100];
    double salario, vendas, total, porcentagem = 0.15;

    scanf("%s %lf %lf", &nome, &salario, &vendas);

    total = salario + (vendas * porcentagem);

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}

/*
    ---------------------
    Entrada:
        JOAO
        500.00
        1230.30  
    Saida:
        TOTAL = R$ 684.54
    ---------------------
    ---------------------
    Entrada:    
        PEDRO
        700.00
        0.00
    Saida:
        TOTAL = R$ 700.00
    ---------------------

    ---------------------
    Entrada:
        MANGOJATA
        1700.00
        1230.50
    Saida:
        TOTAL = R$ 1884.58
    ---------------------
*/