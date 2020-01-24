
#include <stdio.h>

int main() {

    int x = 0, y = 0, resultado = 0;
    scanf("%d %d", &x, &y);

    y % 2 == 0? (y++) : (y+=2);

    for(int i = y; i < x; i+=2) {
        resultado = resultado + i;
    } 

    printf("%d\n", resultado);

    return 0;
}

/*
    ----------------------------
    Entrada:
        6
        -5    
    Saida:
        5
    ----------------------------
    ----------------------------
    Entrada:    
        15
        12
    Saida:
        13      
    ----------------------------
    ----------------------------
    Entrada:    
        12
        12
    Saida:
        0      
    ----------------------------
*/