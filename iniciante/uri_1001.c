
#include <stdio.h>

int main() {

    int a, b, x;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("X = %d\n", x = a + b);

    return 0;
}

/*
    -----------
    Entrada:
        10
        9
    Saida:
        X = 19
    -----------

    -----------
    Entrada:
        -10
        4
    Saida:
        X = -6
    -----------
    
    -----------
    Entrada:
        15
        -7
    Saida:
        X = 8
    -----------
*/