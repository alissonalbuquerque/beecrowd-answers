
#include <stdio.h>

#define SAO_PAULO "Sao Paulo"
#define CAMPINAS "Campinas"
#define RIO_DE_JANEIRO "Rio de Janeiro"
#define VITORIA "Vitoria"
#define BELO_HORIZONTE "Belo Horizonte"
#define JUIZ_DE_FORA "Juiz de Fora"
#define BRASILIA "Brasilia"
#define SALVADOR "Salvador"
#define NAO_CADASTRADO "DDD nao cadastrado"

int main() {

    short entrada;
    scanf("%hd", &entrada);

    switch(entrada) {

        case 11:
            puts(SAO_PAULO);
            break;

        case 19:
            puts(CAMPINAS);
            break;

        case 21:
            puts(RIO_DE_JANEIRO);
            break;

        case 27:
            puts(VITORIA);
            break;

        case 31:
            puts(BELO_HORIZONTE);
            break;

        case 32:
            puts(JUIZ_DE_FORA);
            break;

        case 61:
            puts(BRASILIA);
            break;

        case 71:
            puts(SALVADOR);
            break;

        default:
            puts(NAO_CADASTRADO);
    }

    return 0;
}

/*
    ----------------------------
    Entrada:
        11
    Saida:
        Sao Paulo
    ----------------------------
*/