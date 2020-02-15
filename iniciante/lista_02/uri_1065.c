
#include <stdio.h>

int main() {

    int valor, contador = 0;
    
    for(int i = 0; i < 5; i++) {
        scanf("%d", &valor);

        if(valor % 2 == 0) {
            contador++;
        }

    }

    printf("%d valores pares\n", contador);

    return 0;
}
