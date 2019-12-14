
#include <stdio.h>

int main() {

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if( (b > c) && (d > a) && (c + d > a + b) && (c > 0 && d > 0) && (a % 2 == 0)) {
        printf("Valores aceitos\n");
    } else {
        printf("Valores nao aceitos\n");
    }

    return 0;
}

/*
    ----------------------------
    Entrada:
        5 6 7 8
    Saida:
        Valores nao aceitos
    ----------------------------
    ----------------------------
    Entrada:    
        2 3 2 6
    Saida:
        Valores aceitos
    ----------------------------
*/