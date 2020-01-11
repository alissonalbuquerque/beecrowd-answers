
#include <stdio.h>

int main() {

    int input, cont = 5;
    int par = 0, impar = 0, positivo = 0, negativo = 0;

    while(cont--) {

        scanf("%d", &input);

        input % 2 == 0? par++ : impar++;

        if(input >= 0) {
            if(input >= 1){
                positivo++;
            }
        } else {
            negativo++;
        }

    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);
    
    return 0;
}

/*
    ----------------------------
    Entrada:
        -5
        0
        -3
        -4
        12
    Saida:
        3 valor(es) par(es)
        2 valor(es) impar(es)
        1 valor(es) positivo(s)
        3 valor(es) negativo(s)
    ----------------------------
*/