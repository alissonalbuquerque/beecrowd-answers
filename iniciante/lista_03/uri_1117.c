
#include <stdio.h>

int main() {

    double nota, media = 0;
    int contador = 0;

    while(contador < 2 && scanf("%lf", &nota)) {

        if(nota >= 0 && nota <= 10) {
            media += nota;
            contador++;
        } else {
            puts("nota invalida");
        }

    }

    media = media / 2.0;
    printf("media = %.2lf\n", media);

    return 0;
}
