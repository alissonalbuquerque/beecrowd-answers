
#include <stdio.h>

int main() {

    double valor;
    int contador = 0;

    for(int i = 0; i < 6; i++) {

        scanf("%lf", &valor);

        if(valor > 0) {
            contador++;
        }

    }

    printf("%d valores positivos\n", contador);

    return 0;
}

/*
    ----------------------------
    Entrada:
        7
        -5
        6
        -3.4
        4.6
        12
    Saida:
        4 valores positivos
    ----------------------------
*/