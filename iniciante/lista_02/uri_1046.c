
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
