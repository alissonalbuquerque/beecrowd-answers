
#include <stdio.h>

int main() {

    int inicio, fim, saida;
    const int dia_completo = 24;

    scanf("%d %d", &inicio, &fim);

    if(inicio > fim) {
        saida = fim - inicio + dia_completo;
    } else if(inicio < fim) {
        saida = fim - inicio;
    } else {
        saida = dia_completo;
    }

    printf("O JOGO DUROU %d HORA(S)\n", saida);

    return 0;
}

/*
    ----------------------------
    Entrada:
        16 2
    Saida:
        O JOGO DUROU 10 HORA(S)
    ----------------------------
    ----------------------------
    Entrada:
        0 0
    Saida:
        O JOGO DUROU 24 HORA(S)
    ----------------------------
    ----------------------------
    Entrada:
        2 16
    Saida:
        O JOGO DUROU 14 HORA(S)
    ----------------------------
*/