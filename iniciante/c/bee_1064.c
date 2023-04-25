
#include <stdio.h>

int main() {

    int contador = 0;
    double valor, media = 0;

    for(int i = 0; i < 6; i++) {

        scanf("%lf", &valor);

        if(valor > 0) {
            media += valor;
            contador++;
        }

    }

    media = media / contador;

    printf("%d valores positivos\n", contador);
    printf("%.1lf\n", media);

    return 0;
}
