
#include <stdio.h>

int main() {

    double resultado = 1;

    for(int i = 2; i <= 100; i++ ) {

        resultado += 1.0 / i;

    }

    printf("%.2f\n", resultado);
    return 0;
}
