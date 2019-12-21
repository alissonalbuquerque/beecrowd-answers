
#include <stdio.h>

int main() {

    int a, b, soma;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("SOMA = %d\n", soma = a + b);

    return 0;
}

/*
    --------------
    Entrada:
        30
        10
    Saida:
        SOMA = 40
    --------------

    --------------
    Entrada:
        -30
        10
    Saida:
        SOMA = -20
    --------------

    --------------
    Entrada:
        0
        0
    Saida:
        SOMA = 0
    --------------
*/