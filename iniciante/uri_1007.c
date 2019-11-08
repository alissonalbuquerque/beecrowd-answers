
#include <stdio.h>

int main() {

    int a, b, c, d, diferenca;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    diferenca = a * b - c * d;

    printf("DIFERENCA = %d\n", diferenca);

    return 0;
}

/*
    ---------------------
    Entrada:
        5
        6
        7
        8        
    Saida:
        DIFERENCA = -26
    ---------------------
    ---------------------
    Entrada:    
        0
        0
        7
        8
    Saida:
        DIFERENCA = -56
    ---------------------

    ---------------------
    Entrada:
        5
        6
        -7
        8
    Saida:
        DIFERENCA = 86
    ---------------------
*/