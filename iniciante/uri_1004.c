
#include <stdio.h>

int main() {

    int a, b, prod;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("PROD = %d\n", prod = a * b);

    return 0;
}

/*
    --------------
    Entrada:
        3
        9
    Saida:
        PROD = 27
    --------------

    --------------
    Entrada:
        -30
        10
    Saida:
        PROD = -20
    --------------

    --------------
    Entrada:
        0
        9
    Saida:
        PROD = 0
    --------------
*/