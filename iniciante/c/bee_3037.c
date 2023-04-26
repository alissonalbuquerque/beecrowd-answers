
#include <stdio.h>

typedef struct {
    int pontos;
    int distancia;
} jogador;

int pontos_lancamento(jogador* j) {
    return j->pontos * j->distancia;
}

int lancamentos() {

    int result = 0;
    jogador j;

    for(int i = 0; i < 3; i++) {
        scanf("%d %d", &j.pontos, &j.distancia);
        result += pontos_lancamento(&j);
    }

    return result;
}

int main() {

    int n, joao, maria;

    scanf("%d", &n);

    while(n--) {

        joao = lancamentos();
        maria = lancamentos();

        (joao > maria)? puts("JOAO") : puts("MARIA");

    }

    return 0;
}
