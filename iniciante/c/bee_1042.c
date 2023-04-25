
#include <stdio.h>
#include <stdlib.h>

int comparador (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}


int main() {

    int vetor_entrada[3];
    int vetor_ordenado[3];
    int size = sizeof(0);
    int len = sizeof(vetor_entrada) / sizeof(vetor_entrada[0]);

    scanf("%d %d %d", &vetor_entrada[0], &vetor_entrada[1], &vetor_entrada[2]);

    for(int i = 0; i < len; i++) {
        vetor_ordenado[i] = vetor_entrada[i];
    }

    qsort(vetor_ordenado, len, size, comparador);

    for(int j = 0; j < len; j++) {
        printf("%d\n", vetor_ordenado[j]);
    }

    printf("\n");

    for(int k = 0; k < len; k++) {
        printf("%d\n", vetor_entrada[k]);
    }

    return 0;
}
