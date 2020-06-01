
#include <stdio.h>

int processamento(int x, size_t size) {

    int resultado = 0;

    (x % 2 == 0)? (x) : (x++);

    for(int i = 0; i < size; i++) {
        resultado += x + 2*i;
    }

    return resultado;
}

int main() {

    int x;

    while( scanf("%d", &x) && x != 0 ) {

        printf("%d\n", processamento(x, 5));

    }

    return 0;
}
