
#include <stdio.h>

#define CACHORRO_QUENTE 4.00
#define X_SALADA 4.50
#define X_BACON 5.00
#define TORRADA_SIMPLES 2.00
#define REFRIGERANTE 1.50

int main() {

    int codigo, unidade;
    double valor_conta;
    scanf("%d %d", &codigo, &unidade);

    switch(codigo) {
        case 1:
            valor_conta = unidade * CACHORRO_QUENTE;
            break;
        case 2:
            valor_conta = unidade * X_SALADA;
            break;
        case 3:
            valor_conta = unidade * X_BACON;
            break;
        case 4:
            valor_conta = unidade * TORRADA_SIMPLES;
            break;
        case 5:
            valor_conta = unidade * REFRIGERANTE;
            break;
        default:
            break;
    }

    printf("Total: R$ %.2lf\n", valor_conta);

    return 0;
}
