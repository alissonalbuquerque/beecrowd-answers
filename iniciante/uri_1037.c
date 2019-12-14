
#include <stdio.h>

int main() {

    double entrada;
    scanf("%lf", &entrada);

    if(entrada >= 0 && entrada <= 25) {
        printf("Intervalo [0,25]\n");
    } else if(entrada > 25 && entrada <= 50) {
        printf("Intervalo (25,50]\n");
    } else if(entrada > 50 && entrada <= 75) {
        printf("Intervalo (50,75]\n");
    } else if(entrada > 75 && entrada <= 100) {
        printf("Intervalo (75,100]\n");
    } else {
        printf("Fora de intervalo\n");
    }

    return 0;
}

/*
    ----------------------------
    Entrada:
        25.01
    Saida:
        Intervalo (25,50]
    ----------------------------
    ----------------------------
    Entrada:    
        25.00
    Saida:
        Intervalo [0,25]
    ----------------------------
    ----------------------------
    Entrada:
        100.00
    Saida:
        Intervalo (75,100]
    ----------------------------
    ----------------------------
    Entrada:
        -25.02
    Saida:
        Fora de intervalo
    ----------------------------
*/