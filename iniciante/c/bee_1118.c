
#include <stdio.h>
#include <stdbool.h>

int main() {

    double valor[2];
    double media = 0;

    int loop = 1;
    while(loop == 1) {

        int contador = 0;
        while(contador < 2) {

            scanf("%lf", &valor[contador]);

            if(valor[contador] >= 0 && valor[contador] <= 10) {
                contador = contador + 1;
            } else {
                puts("nota invalida");
            }

        }

        media = (valor[0] + valor[1]) / 2;
        printf("media = %.2lf\n", media);

        while(true) {

            puts("novo calculo (1-sim 2-nao)");
            scanf("%d", &loop);

            if(loop == 1 || loop == 2) {
                break;
            }

        }


    }

    return 0;
}
